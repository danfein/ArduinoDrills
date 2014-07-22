// Example 03a: Turn on the LED when the button is pressed and keep it on after relased

const int LED = 13; // the pin for the LED
const int button = 7; //the input pin for the button
int val = 0; //val will store the state of button
int state = 0; //0 = LED off - 1= LED on

void setup(){
  pinMode(LED, OUTPUT); //set pin 13 to output for the LED
  pinMode(button, INPUT); //Set pin 7 to input to listen for the button 
}

void loop(){
val = digitalRead(button); //read input value from button, set to val

//Check if the input is HIGH -button pressed- and change state if so
if (val == HIGH) {
 state = 1 - state; 
  }

  if (state == 1) {
    digitalWrite(LED, HIGH); // Turn LED on if state is 1
  }else{
    digitalWrite(LED, LOW); 
  }
}
