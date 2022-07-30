#include <Servo.h> 

Servo window1;


void setup() 
{ 
  window1.attach(4);
  
  Serial.begin(9600);
  Serial.println("-----Rain water Sensor----- ");
  Serial.println("Programed by Ashaan :-)");
  delay(3000);
  window1.write(0);
  
} 

void loop() 
{ 
  int sense=analogRead(A3);
  Serial.print("Analog reading: ");
  Serial.println(sense);
  if(sense<350)
  {Serial.println("Rain detected!");
    window1.write(130);
  Serial.println("> Window 1 closed");
  delay(1000);}
else {Serial.println("It ain't raining");
window1.write(0);
}
  delay(2000);                            
} 
