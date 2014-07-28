// basic light meter

int val = 0; //variable for value coming from light sensor
int d = 150; //Delay variable
void blinkR( int x ) //function to blink
  {
    digitalWrite(x, HIGH);
    /*
    delay(d);
    digitalWrite(x, LOW);
    delay(d);
    */
  }

void setup()
{
  //Serial.begin(9600); //open serial port for diagnostic
  pinMode(3, OUTPUT); 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //Analog pins are automatically input
}

void loop()
{
  val = analogRead(0); //read value from analog pin zero
  //Serial.println(val); //print sensor value to serial for diagnostic
  if (val > 50)
    {
      blinkR(3); //call blinkR function, send it pin number
    }
    else
    {
      digitalWrite(3, LOW); //turn LED off
    }  
  
  if (val > 75)
    {
      blinkR(5); //turn LED on
    }
    else
    {
      digitalWrite(5, LOW); //turn LED off
    }  

  if (val > 100)
    {
      blinkR(6); //turn LED on
    }
    else
    {
      digitalWrite(6, LOW); //turn LED off
    }  

  if (val > 200)
    {
      blinkR(9); //turn LED on
    }
    else
    {
      digitalWrite(9, LOW); //turn LED off
    }  

  if (val > 300)
    {
      blinkR(10); //turn LED on
    }
    else
    {
      digitalWrite(10, LOW); //turn LED off
    }  
}
