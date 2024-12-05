// #include <BluetoothSerial.h>
 
// #if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
// #error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
// #endif
 
// #if !defined(CONFIG_BT_SPP_ENABLED)
// #error Serial Bluetooth not available or not enabled. It is only available for the ESP32 chip.
// #endif
 
// BluetoothSerial SerialBT;
 
// #define BT_DISCOVER_TIME  10000
// static bool btScanSync = true;

// char buffer;
// bool connected = false;
 
// void setup() {
//   Serial.begin(9600);
//   SerialBT.begin("ESP32test"); //Bluetooth device name
//   Serial.println("The device started, now you can pair it with bluetooth!");
//   if (btScanSync) {
//     Serial.println("Starting discover...");
//     BTScanResults *pResults = SerialBT.discover(BT_DISCOVER_TIME);
//     if (pResults)
//       pResults->dump(&Serial);
//     else
//       Serial.println("Error on BT Scan, no result!");
//   }

//   if (!connected) {
//     connected = SerialBT.connect("a0:5a:5e:52:7b:03");
//     while(1);
//   }

//   Serial.println("Connected");
// }
 
// void loop() {
//     if (SerialBT.available()) {
//       buffer = SerialBT.read();
//       Serial.println(buffer);
//     }
// }

