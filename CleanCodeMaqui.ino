// Controlling a servo position using a potentiometer (variable resistor) 
// by Michal Rinott <http://people.interaction-ivrea.it/m.rinott> 

#include <Servo.h> 

Servo myservohand; 
Servo myservo;  // create servo object to control a servo 
Servo myservo2; 
Servo myservothumb;

int potpinhand = 1;
int potpin = 2;  // analog pin used to connect the potentiometer
int potpinthumb = 3;
int val;    // variable to read the value from the analog pin 
int valhand; 
int valthumb; 
void setup() 
{ 
  myservohand.attach(2);
  myservo.attach(3);
  myservo2.attach(4);   // attaches the servo on pin 9 to the servo object
  myservothumb.attach(5);
} 
 
void loop() 
{ 
  
  valhand = analogRead(potpinhand);            // reads the value of the potentiometer (value between 0 and 1023) 
  valhand = map(valhand, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservohand.write(valhand);
  
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023) 
  val = map(val, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservo.write(val);    // sets the servo position according to the scaled value 
  myservo2.write(val);
  Serial.println  (val);
  
   valthumb = analogRead(potpinthumb);            // reads the value of the potentiometer (value between 0 and 1023) 
  valthumb = map(valthumb, 0, 1023, 0, 179);     // scale it to use it with the servo (value between 0 and 180) 
  myservothumb.write(valthumb);
  
  delay(15);                           // waits for the servo to get there 
} 
