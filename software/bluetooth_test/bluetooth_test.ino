#include <ArduinoBLE.h>

void setup() {
  Serial.begin(9600);

  if (!BLE.begin()) {
    Serial.println("Starting Bluetooth LE module failed.");
    // Serial.println("Reseting...");
    // static const char RESET[] = "AT+RESET\n";
    // Serial2.write(RESET, sizeof(RESET) - 1);
    // delay(2000);
    // NVIC_SystemReset();

    while(1);
  } else {
    Serial.println("Bluetooth LE module started.");
  }

  BLE.advertise();
  BLE.setConnectable(true);

  // BLE.scanForAddress("A0:5A:5E:51:FD:37"); // Controller 1
  // BLE.scanForAddress("A0:5A:5E:52:7B:03"); // Controller 2
  BLE.scan();
  Serial.println("Scanning for A0:5A:5E:51:FD:37");
}

void loop() {
  BLEDevice controller = BLE.available();

  if (controller) {
    // Serial.println("Found a peripheral.");
    if (controller.localName() == "Gamepad") {
      Serial.println("Found the right peripheral.");
      BLE.stopScan();
      controller.connect();
    } else {
      if (controller.localName() != "") {
        Serial.println(controller.localName());
        Serial.println(controller.address());
      }
    }
  }
}

// #include <PS4Controller.h>
 
// void setup()
// {
//   Serial.begin(115200);
 
//   PS4.begin("yourDeviceMAC");
//   Serial.println("Initialization ready!");
// }
 
// void loop()
// {
//   if(PS4.isConnected()) {
//     Serial.println("Controller connected");
//   }
 
//   delay(1000);
// }