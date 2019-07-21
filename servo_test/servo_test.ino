#include <Servo.h> //Servo Library             
Servo name_servo;   //Give Servo name             

void setup() {
  
name_servo.attach (9); // servo signal pins (PWM 3-5-6-9-10-11) 
}

void loop() {
  char x;
  if(Serial.available()>0)
    {
      x = Serial.read();
      Serial.print(x);
    
    if(x==48)
  {
  name_servo.write (0);         // Turned to 0 degrees
  delay(1000);              // wait for a second
  name_servo.write (100);         // Turned to 50 degrees
  delay(1000);              // wait for a second
    
  name_servo.write (100);         // Turned to 100 degrees
  delay(1000);              // wait for a second
  name_servo.write (150);         // Turned to 150 degrees
  delay(1000);              // wait for a second
  
  name_servo.write (180);         // Turned to 180 degrees
  delay(1000);              // wait for a second
  name_servo.write (150);         // Turned to 150 degrees
  delay(1000);              // wait for a second
    
  name_servo.write (100);         // Turned to 100 degrees
  delay(1000);              // wait for a second
  name_servo.write (50);         // Turned to 50 degrees
  delay(1000);              // wait for a second
  
  }
    }

}
