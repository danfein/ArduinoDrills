// 2x2 servo grid, flipping cards - prototype for sticky wicket (postit bot)

#include <Servo.h> //server driving helper code
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
int pos = 0; 
int del = 1111;
int down = 0;
int up = 90;
int downL = 180;


void setup() 
{
 //assign servos to pins
 myservo1.attach(4); // 0 down, 90 up
 myservo2.attach(5); // 0 down, 90 up
 myservo3.attach(6); // 180 down, 90 up
 myservo4.attach(7); // 180 down, 90 up
}

void loop() //run through all the functions
{
  alpha();
  delay(del);
  beta();
  delay(del);
  delta();
  delay(del);
  gamma();
  delay(del);
  omega();
  delay(del);
  zero();
  delay(del);
  x1();
  delay(del);
  x2();
  delay(del);
  left();
  delay(del);
  right();
  delay(del);
  top();
  delay(del);
  bottom();
  delay(del);  
}
void zero() //drop all servos
{
  //Zero out
  myservo1.write(down);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(downL);
  delay(del);
  myservo4.write(downL);
  delay(del);
}

void alpha() //lift servo 1
{
  myservo1.write(up);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(downL);
  delay(del);
  myservo4.write(downL);
  delay(del);
}

void beta() //lift servo 2
{
  myservo1.write(down);
  delay(del);
  myservo2.write(up);
  delay(del);
  myservo3.write(downL);
  delay(del);
  myservo4.write(downL);
  delay(del);
}

void delta() //lift servo 3
{
  myservo1.write(down);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(up);
  delay(del);
  myservo4.write(downL);
  delay(del);
}

void gamma() //lift servo 4
{
  myservo1.write(down);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(downL);
  delay(del);
  myservo4.write(up);
  delay(del);
}

void omega() //all up
{
  myservo1.write(up);
  delay(del);
  myservo2.write(up);
  delay(del);
  myservo3.write(up);
  delay(del);
  myservo4.write(up);
  delay(del);
}
void x1()
{
  myservo1.write(up);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(up);
  delay(del);
  myservo4.write(downL);
  delay(del);
}
void x2()
{
  myservo1.write(down);
  delay(del);
  myservo2.write(up);
  delay(del);
  myservo3.write(down);
  delay(del);
  myservo4.write(up);
  delay(del);
}
void left()
{
  myservo1.write(up);
  delay(del);
  myservo2.write(up);
  delay(del);
  myservo3.write(downL);
  delay(del);
  myservo4.write(downL);
  delay(del);
}
void right()
{
  myservo1.write(down);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(up);
  delay(del);
  myservo4.write(up);
  delay(del);
}
void top()
{
  myservo1.write(up);
  delay(del);
  myservo2.write(down);
  delay(del);
  myservo3.write(up);
  delay(del);
  myservo4.write(downL);
  delay(del);
}
void bottom()
{
  myservo1.write(down);
  delay(del);
  myservo2.write(up);
  delay(del);
  myservo3.write(downL);
  delay(del);
  myservo4.write(up);
  delay(del);
}

void sweep()
{
  //continuous sweep
  /*
  for(pos = 0; pos < 180; pos += 15)  // goes from 0 degrees to 180 degrees
  {                                  // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(150);                       // waits 15ms for the servo to reach the position
  }
  for(pos = 180; pos>=1; pos-=5)     // goes from 180 degrees to 0 degrees
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(150);                       // waits 15ms for the servo to reach the position
  } 
  */
}
