// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

// Wifi
#define IOT_CONFIG_WIFI_SSID "conginx"
#define IOT_CONFIG_WIFI_PASSWORD "conginx111"

// Azure IoT
#define IOT_CONFIG_IOTHUB_FQDN "cong-nguyen.azure-devices.net"
#define IOT_CONFIG_DEVICE_ID "esp8266"
#define IOT_CONFIG_DEVICE_KEY "g29a+VVbOkxDzhHPQBTMrKIy65gbOl2CLoRQuVrOkiU="

// Publish 1 message every 2 seconds
#define TELEMETRY_FREQUENCY_MILLISECS 6000

//IDs
static char PARKING_AREA_ID[] = "d934def1-82fc-4fd3-a56f-4db4aab8c6eb";
static char PARKING_SLOT_3[] = "fa1e4ba9-8ef6-4c86-8037-96890e3065d7"; //A1
static char PARKING_SLOT_4[] = "fa1e4ba9-8ef6-4c86-8037-96890e3065d8"; //A2
static char PARKING_SLOT_2[] = "fa1e4ba9-8ef6-4c86-8037-96820e3065a9"; //A3
static char PARKING_SLOT_1[] = "fa1e4ba9-8ef6-4c86-8037-96120e3065b9"; //A4

static char METHOD_RFID_IN[] = "RFIDIn"; 
static char METHOD_NOTIFY_PARKING[] = "NotifyParking";
static char METHOD_NOTIFY_UNPARKING[] = "NotifyUnparking";


//Message case
static const int RFID_IN_NUMBER = 0;
static const int NOTIFY_PARKING_NUMBER = 1;
static const int NOTIFY_UNPARKING_NUMBER = 2;
