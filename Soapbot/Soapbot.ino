#include <Servo.h>

#define LEFT_SERVO 40
#define CENTERED_SERVO 90
#define RIGHT_SERVO 140

Servo myservo;  // create servo object to control a servo

int val;    // variable to read the value from the analog pin
bool goServo = true;

void setup()
{
  myservo.attach(8);  // attaches the servo on pin 8 to the servo object
}

void loop() 
{ 
    goServo = false;
    val = LEFT_SERVO;
    myservo.write(val);                  // sets the servo position according to the scaled value 
    delay(500);                           // waits for the servo to get there 

    goServo = true;
    val = RIGHT_SERVO;
    myservo.write(val);                  // sets the servo position according to the scaled value 
    delay(500);                           // waits for the servo to get there
  
  /*val = 90;
  myservo.write(val);
  delay(1000); */
} 
