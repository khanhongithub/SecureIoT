MQTT Client Example
===================
The MQTT client can be used to:

* Publish sensor readings to an MQTT broker.
* Subscribe to a topic and receive commands from an MQTT broker

The demo will give some visual feedback with a LED (configurable):
* Very fast blinking: Searching for a network
* Fast blinking: Connecting to broker
* Slow, long blinking: Sending a publish message

This example is known to work with all platforms that support the new button
API.

Publishing
----------
By default the example will attempt to publish readings to an MQTT broker
running on the IPv6 address specified as `MQTT_CLIENT_CONF_BROKER_IP_ADDR` in
`project-conf.h`. 

Subscribing
-----------
You can also subscribe to topics and receive commands, but this will only
work if MQTT_CLIENT_CONF_DEACTIVATE_SUB is commented. 


