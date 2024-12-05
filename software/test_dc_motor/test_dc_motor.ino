// #include <esp32-hal-ledc.h>
#include <esp32-hal-gpio.h>
#include "driver/mcpwm.h"
#include "soc/mcpwm_reg.h"
#include "soc/mcpwm_struct.h"

// Motor A
int motor1Pin1 = 27; 
int motor1Pin2 = 26; 
int enable1Pin = 14; 

// Motor B
int motor2Pin1 = 16;
int motor2Pin2 = 17;

// Setting PWM properties
const int freq = 30000;
const int pwmChannel = 1;
const int resolution = 8;
int dutyCycle = 100;

// mcpwm_config_t pwm_config;

void setup() {
  // sets the pins as outputs:
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1Pin, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);

  // mcpwm_gpio_init(MCPWM_UNIT_0, MCPWM0A, enable1Pin);
  
  // configure LEDC PWM
  // ledcAttachPin(enable1Pin, pwmChannel);
  // ledcSetup(pwmChannel, freq, resolution);

  // pwm_config.frequency = 30000;
  // pwm_config.cmpr_a = 0;
  // pwm_config.cmpr_b = 0;
  // pwm_config.counter_mode = MCPWM_UP_COUNTER;
  // pwm_config.duty_mode = MCPWM_DUTY_MODE_0;
  // pwm_config.duty_mode = MCPWM_DUTY_MODE_0;
  // mcpwm_init(MCPWM_UNIT_0, MCPWM_TIMER_0, &pwm_config);


  Serial.begin(115200);

  // testing
  Serial.print("Testing DC Motor...");
}

void loop() {
  // MOTOR A ONLY
  // Move the DC motor forward at maximum speed
  Serial.println("Moving A Forward");
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH); 
  delay(2000);

  // Stop the DC motor
  Serial.println("Motor A stopped");
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  delay(1000);

  // Move DC motor backwards at maximum speed
  Serial.println("Moving A Backwards");
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW); 
  delay(2000);

  // Stop the DC motor
  Serial.println("Motor A stopped");
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  delay(1000);

  // // MOTOR B ONLY
  //   // Move the DC motor forward at maximum speed
  // Serial.println("Moving B Forward");
  // digitalWrite(motor2Pin1, LOW);
  // digitalWrite(motor2Pin2, HIGH); 
  // delay(2000);

  // // Stop the DC motor
  // Serial.println("Motor B stopped");
  // digitalWrite(motor2Pin1, LOW);
  // digitalWrite(motor2Pin2, LOW);
  // delay(1000);

  // // Move DC motor backwards at maximum speed
  // Serial.println("Moving B Backwards");
  // digitalWrite(motor2Pin1, HIGH);
  // digitalWrite(motor2Pin2, LOW); 
  // delay(2000);

  // // Stop the DC motor
  // Serial.println("Motor B stopped");
  // digitalWrite(motor2Pin1, LOW);
  // digitalWrite(motor2Pin2, LOW);
  // delay(1000);

  // // MOTOR A AND B
  //   // Move the DC motor forward at maximum speed
  // Serial.println("Moving A Forward, B Forward");
  // digitalWrite(motor1Pin1, LOW);
  // digitalWrite(motor1Pin2, HIGH); 
  // digitalWrite(motor2Pin1, LOW);
  // digitalWrite(motor2Pin2, HIGH); 
  // delay(2000);

  // // Stop the DC motor
  // Serial.println("Motor A stopped, B stopped");
  // digitalWrite(motor1Pin1, LOW);
  // digitalWrite(motor1Pin2, LOW);
  // digitalWrite(motor2Pin1, LOW);
  // digitalWrite(motor2Pin2, LOW);
  // delay(1000);

  // // Move DC motor backwards at maximum speed
  // Serial.println("Moving A Backwards, B Backwards");
  // digitalWrite(motor1Pin1, HIGH);
  // digitalWrite(motor1Pin2, LOW); 
  // digitalWrite(motor2Pin1, HIGH);
  // digitalWrite(motor2Pin2, LOW); 
  // delay(2000);

  // // Stop the DC motor
  // Serial.println("Motor A stopped, B stopped");
  // digitalWrite(motor1Pin1, LOW);
  // digitalWrite(motor1Pin2, LOW);
  // digitalWrite(motor2Pin1, LOW);
  // digitalWrite(motor2Pin2, LOW);
  // delay(1000);

  // Move DC motor forward with increasing speed
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  while (dutyCycle <= 255){
    // ledcWrite(enable1Pin, dutyCycle);   
    // mcpwm_set_duty(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, dutyCycle/255);
    // mcpwm_set_duty_type(MCPWM_UNIT_0, MCPWM_TIMER_0, MCPWM_OPR_A, MCPWM_DUTY_MODE_0);
    analogWrite(enable1Pin, dutyCycle);
    Serial.print("Forward with duty cycle: ");
    Serial.println(dutyCycle);
    dutyCycle = dutyCycle + 5;
    delay(500);
  }
  dutyCycle = 100;
}