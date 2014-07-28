// basic light meter, now with functions

int val = 0; //variable for value coming from light sensor

void trigger(int V, int P) //V is trigger threshold, p is pin to trigger
{
   if (val > V)
    {
      digitalWrite(P, HIGH);    
    }
    else
    {
      digitalWrite(P, LOW); 
    }   
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
  trigger(50,3);
  trigger(75,5);
  trigger(100,6);
  trigger(150,9);
  trigger(200,10); 
 
}
