/******************* COVID-19 Sanitizer/Soap Dispenser *******************/
/* Title: Automatic Hand Sanitizer Dispenser
 * Author: Laya Mathikshara
 * Date of creation: 19.03.2020
 * MCU: Arduino Mega 2560
 * Sensors: IR sensor
 * Actuator: Micro servo 9g sg90
 * Pinout: 
 *        Micro servo - 3(pwm)
 *        IR sensor - D2  
 */

// Includes
#include<Servo.h>

Servo motor;

// Setup Function
void setup()
{
  pinMode(2,INPUT);
  motor.attach(3);
}

// Loop Function
void loop() 
{
  int s=digitalRead(2);
  if (s==HIGH)
  {
     motor.write(0);
     delay(200);
     motor.write(90);
     delay(1000);
     motor.write(0);
  }

}


