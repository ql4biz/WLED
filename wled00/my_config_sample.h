#pragma once

/*
 * Welcome!
 * You can use the file "my_config.h" to make changes to the way WLED is compiled!
 * It is possible to enable and disable certain features as well as set defaults for some runtime changeable settings.
 *
 * How to use:
 * PlatformIO: Just compile the unmodified code once! The file "my_config.h" will be generated automatically and now you can make your changes.
 *
 * ArduinoIDE: Make a copy of this file and name it "my_config.h". Go to wled.h and uncomment "#define WLED_USE_MY_CONFIG" in the top of the file.
 *
 * DO NOT make changes to the "my_config_sample.h" file directly! Your changes will not be applied.
 */

// uncomment to force the compiler to show a warning to confirm that this file is included
#warning **** my_config.h: Settings from this file are honored ****

//WARNING: this will hardcode these as the default even after a factory reset
#define CLIENT_SSID       "QL4B-MAIN"
#define CLIENT_PASS       "CMmjPrmg3CqHMHbPwtm3"

#define MDNS_NAME         "wled8"               // mDNS hostname, ie: *.local


#define MQTT_ENABLED                            // Enable MQTT

// MQTT Configuration
#define MQTT_MAX_TOPIC_LEN  32
#define MQTT_MAX_SERVER_LEN 32

// Configure MQTT credentials and settings
#define MQTT_SERVER         "wled8.ql48.net"    // Replace with your MQTT server IP or domain
#define MQTT_PORT           1883                // Default MQTT port (can be changed if needed)
#define MQTT_USER           "wled8"             // Optional MQTT username
#define MQTT_PASS           "ql48"              // Optional MQTT password
#define MQTT_CLIENT_ID      "wled8"             // Unique client ID for your WLED instance
#define MQTT_DEVICE_TOPIC   "Ql48/WLEDS/wled7"  // Topic for this specific device
#define MQTT_GROUP_TOPIC    "Ql48/WLEDS/all"    // Topic for group commands
#define MQTT_RETAIN         false               // Retain MQTT messages or not

// Led Configuration
#define LEDPIN 2

