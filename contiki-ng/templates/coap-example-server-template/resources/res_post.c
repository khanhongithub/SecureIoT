/*---------------------------------------------------------------------------*/
/*
 * Example resource with post for the Project Laboratory 
 * "Secure SoC for the Internet-of-Things"
 */ 
/*---------------------------------------------------------------------------*/

#include "contiki.h"
#include "coap-engine.h"

#include <string.h>


static void res_post_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset);
static void res_get_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset);

RESOURCE(res_post,
         "title=\"SetNumber: POST setNumber=nr\";rt=\"Text\"",
         res_get_handler,
         res_post_handler,
         NULL,
         NULL);

static int stored_number = 0;

static void
res_get_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
    snprintf((char*)buffer,REST_MAX_CHUNK_SIZE,"%d",stored_number);
    uint8_t len = (uint8_t) strlen((char*)buffer);

    coap_set_header_content_format(response, TEXT_PLAIN); 
    coap_set_header_etag(response, &len, 1);
    coap_set_payload(response, buffer, len);
}


static void
res_post_handler(coap_message_t *request, coap_message_t *response, uint8_t *buffer, uint16_t preferred_size, int32_t *offset)
{
    size_t received_len = 0;
    const char *setNumber = NULL;

    
    if ((received_len = coap_get_post_variable(request, "setNumber", &setNumber))) {
        printf("setNumber %s with length %d\n", setNumber, received_len);
        stored_number = strtol(setNumber,NULL,10);
        printf("stored number: %d\n", stored_number);
    } else {
        coap_set_status_code(response, BAD_REQUEST_4_00);
  }
}
