/*
This is a test sketch for the Adafruit assembled Motor Shield for Arduino v2
It won't work with v1.x motor shields! Only for the v2's with built in PWM
control

For use with the Adafruit Motor Shield v2
---->  http://www.adafruit.com/products/1438
*/

// Make sure to install these libraries in your Arduino IDE
#include <Adafruit_MotorShield.h>
#include <Adafruit_PWMServoDriver.h>
#include <Adafruit_MCP23X17.h>
#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;
int direction;
char buffer;

// Create the motor shield object with the default I2C address
Adafruit_MotorShield AFMS1 = Adafruit_MotorShield(0x60);
// Or, create it with a different I2C address (say for stacking)
// Adafruit_MotorShield AFMS2 = Adafruit_MotorShield(0x61);
//Adafruit_MotorShield AFMS3 = Adafruit_MotorShield(0x62);
//Adafruit_MotorShield AFMS4 = Adafruit_MotorShield(0x63);


// Select which 'port' M1, M2, M3 or M4. In this case, M1
Adafruit_DCMotor *myMotor1 = AFMS1.getMotor(1);
Adafruit_DCMotor *myMotor2 = AFMS1.getMotor(2);
Adafruit_DCMotor *myMotor3 = AFMS1.getMotor(3);
Adafruit_DCMotor *myMotor4 = AFMS1.getMotor(4);
// You can also make another motor on port M2
//Adafruit_DCMotor *myOtherMotor = AFMS.getMotor(2);


void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Adafruit Motorshield v2 - DC Motor test!");
  AFMS1.begin();


  if (!AFMS1.begin()) {         // create with the default frequency 1.6KHz
  // if (!AFMS.begin(1000)) {  // OR with a different frequency, say 1KHz
    Serial.println("Could not find Motor Shield. Check wiring.");
    while (1);
  }
  Serial.println("Motor Shield found.");

  // Set the speed to start, from 0 (off) to 255 (max speed)
  myMotor1->setSpeed(150);
  myMotor2->setSpeed(150);
  myMotor3->setSpeed(150);
  myMotor4->setSpeed(150);

  SerialBT.begin("ESP32test");
  Serial.println("Bluetooth on, you can now pair.");

  direction = -1;
}

void loop() {
  // Be sure to press ENABLE button on ESP32 board after uploading code to RUN



  if (SerialBT.available()) {
    buffer = SerialBT.read();
    if (buffer == 'f') {
      direction = 0;
    } else if (buffer == 'r') {
      direction = 1;
    } else {
      direction = -1;
    }

    if (direction == 0) {
      myMotor1->run(FORWARD);
      myMotor2->run(FORWARD);
      myMotor3->run(FORWARD);
      myMotor4->run(FORWARD);
    } else if (direction == 1) {
      myMotor1->run(BACKWARD);
      myMotor2->run(BACKWARD);
      myMotor3->run(BACKWARD);
      myMotor4->run(BACKWARD);

    } else {
      myMotor1->run(BRAKE);
      myMotor2->run(BRAKE);
      myMotor3->run(BRAKE);
      myMotor4->run(BRAKE);

    }
  }
//  myMotor1->run(BACKWARD);
//  myMotor2->run(BACKWARD);
//  myMotor3->run(BACKWARD);
//  myMotor4->run(BACKWARD);
//  delay(5000);
//  myMotor1->run(RELEASE);
//  myMotor2->run(RELEASE);
//  delay(3000);
  
//  myMotor1->setSpeed(200);
//  myMotor2->setSpeed(200);
//  myMotor1->run(FORWARD);
//  myMotor2->run(FORWARD);
//  delay(5000);
//  myMotor1->run(RELEASE);
//  myMotor2->run(RELEASE);
//  delay(3000);
  
//  AFMS1.setPin(13, HIGH);
//  delay(3000);
//  
//  AFMS1.setPin(0, LOW);
//  delay(1000);

//  while(1);


}