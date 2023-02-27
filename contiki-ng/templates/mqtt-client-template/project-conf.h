/*
 * Copyright (c) 2012, Texas Instruments Incorporated - http://www.ti.com/
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
/*---------------------------------------------------------------------------*/
/*
 * contains small changes for the Project Laboratory 
 * "Secure SoC for the Internet-of-Things" 
 */
/*---------------------------------------------------------------------------*/


#ifndef PROJECT_CONF_H_
#define PROJECT_CONF_H_
/*---------------------------------------------------------------------------*/
/* Enable TCP */
#define UIP_CONF_TCP 1

/*
 * The IPv6 address of the MQTT broker to connect to.
 */
#define MQTT_CLIENT_CONF_BROKER_IP_ADDR "fd00::1"

/*
 * The MQTT username
 */
#define MQTT_CLIENT_CONF_USERNAME "xxx"


/*
 * The MQTT auth token (password) used when connecting to the MQTT broker.
 * Transported in cleartext!
 */
#define MQTT_CLIENT_CONF_AUTH_TOKEN "xxx"

/*
 * Group number (found on the Sensortags, GitLab, ...)
 */
#define MQTT_CLIENT_CONF_GROUP_NUMBER "XX"

/*
 * The Publish intervall between the messages in seconds. 
 * Selet value according to Wireshark Sniff 
 */
#define MQTT_CLIENT_CONF_PUBLISH_INTERVALL 30

/*
 * If subsribtion is wanted, comment following line
 */
#define MQTT_CLIENT_CONF_DEACTIVATE_SUB 




#define MQTT_CLIENT_CONF_LOG_LEVEL LOG_LEVEL_DBG




/*---------------------------------------------------------------------------*/
#endif /* PROJECT_CONF_H_ */
/*---------------------------------------------------------------------------*/
/** @} */
