#include <Servo.h> // header for controller servo

Servo servo; //keeping name of servo SERVO itself

int pos = 180;   // Servo position to 180 degree
int pos1 = 0;    // Servo position to 0 degree


int flexsensor = A1; //Analog Pin of Flex Sensor
int sensorvalue;

void setup()
{
    Serial.begin(9600); 
    servo.attach(9); //signal pin of servo attached(PWM pin)    
}
void loop()
{
sensorvalue = analogRead(flexsensor); 
//read analog value from Flex sensor         
if 
  (sensorvalue <100) // Set value using serial monitor
   {
     servo.write(pos);  // pos 180 degree
     delay(50); //delay in ms
    }
if 
 (sensorvalue >100) // Set value using serial monitor
   {
     servo.write(pos1); // pos1 0 degree
     delay(50); // delay in ms
    }
    Serial.println(sensorvalue); 
    //Print value of Flex Sensor in Serial monitor        
}
