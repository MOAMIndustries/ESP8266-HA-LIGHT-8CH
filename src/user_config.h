#ifndef _USER_CONFIG_H_
#define _USER_CONFIG_H_
// -- Project -------------------------------------
  #define PROJECT                "touch1"          // PROJECT is used as the default topic delimiter and OTA file name

// -- Debugging  ----------------------------------
  #define SERIAL_DEBUG FALSE
  #define SERIAL_DEBUG_BAUD 115200

// -- Wifi ----------------------------------------
  #define WIFI_IP_ADDRESS        "0.0.0.0"         // [IpAddress1] Set to 0.0.0.0 for using DHCP or IP address
  #define WIFI_GATEWAY           "192.168.1.1"   // [IpAddress2] If not using DHCP set Gateway IP address
  #define WIFI_SUBNETMASK        "255.255.255.0"   // [IpAddress3] If not using DHCP set Network mask
  #define WIFI_DNS               "192.168.1.1"    // [IpAddress4] If not using DHCP set DNS IP address (might be equal to WIFI_GATEWAY)

  #define STA_SSID1              "hazzah"      // [Ssid1] Wifi SSID
  #define STA_PASS1              "88helicopter88"  // [Password1] Wifi password
  #define STA_SSID2              "indebuurt2"      // [Ssid2] Optional alternate AP Wifi SSID
  #define STA_PASS2              "VnsqrtnrsddbrN"  // [Password2] Optional alternate AP Wifi password
  #define WIFI_CONFIG_TOOL       WIFI_WPSCONFIG    // [WifiConfig] Default tool if wifi fails to connect
                                                 //   (WIFI_RESTART, WIFI_SMARTCONFIG, WIFI_MANAGER, WIFI_WPSCONFIG, WIFI_RETRY, WIFI_WAIT)

// -- Ota -----------------------------------------
  #define OTA_URL                "http://domus1:80/api/arduino/" PROJECT ".ino.bin"  // [OtaUrl]

// -- MQTT ----------------------------------------
  #define MQTT_USE               1                 // [SetOption3] Select default MQTT use (0 = Off, 1 = On)
  #define MQTT_HOST            "192.168.167"          // [MqttHost]
  #define MQTT_PORT            1883                   // [MqttPort] MQTT port (10123 on CloudMQTT)
  #define MQTT_USER            "hazzah"               // [MqttUser] Optional user
  #define MQTT_PASS            "88helicopter88"       // [MqttPassword] Optional password
// -- MQTT topics ---------------------------------
  //#define MQTT_FULLTOPIC         "tasmota/bedroom/%topic%/%prefix%/" // Up to max 80 characers
  #define MQTT_FULLTOPIC         "%prefix%/%topic%/" // [FullTopic] Subscribe and Publish full topic name - Legacy topic

  // %prefix% token options
  #define SUB_PREFIX             "cmnd"            // [Prefix1] Sonoff devices subscribe to %prefix%/%topic% being SUB_PREFIX/MQTT_TOPIC and SUB_PREFIX/MQTT_GRPTOPIC
  #define PUB_PREFIX             "stat"            // [Prefix2] Sonoff devices publish to %prefix%/%topic% being PUB_PREFIX/MQTT_TOPIC
  #define PUB_PREFIX2            "tele"            // [Prefix3] Sonoff devices publish telemetry data to %prefix%/%topic% being PUB_PREFIX2/MQTT_TOPIC/UPTIME, POWER and TIME
                                                   //   May be named the same as PUB_PREFIX
  // %topic% token options (also ButtonTopic and SwitchTopic)
  #define MQTT_TOPIC             PROJECT           // [Topic] (unique) MQTT device topic
  #define MQTT_GRPTOPIC          "sonoffs"         // [GroupTopic] MQTT Group topic
  #define MQTT_CLIENT_ID         "DVES_%06X"       // [MqttClient] Also fall back topic using Chip Id = last 6 characters of MAC address

                                               //   As an IDE restriction it needs to be the same as the main .ino file
// -- Channels ------------------
  #define ACTIVE_CHANNELS 0b11111111      //Bit mask for connected channels, LSB is CH1, MSB is CH8.
                                          //e.g. CH1-3 & Ch7 active would have a mask 0b01000111
  #define ANALOG_FREQUENCY 1000           //Analog PWM update frequency
  #define ANALOG_RANGE 1024               //PWM Value Range
