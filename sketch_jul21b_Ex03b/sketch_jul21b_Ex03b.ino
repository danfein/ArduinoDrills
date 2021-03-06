// Example 03c: Turn on the LED when the button is pressed and keep it on after relased

const int LED = 13;        // the pin for the LED
const int button = 7;     // the input pin for the button
int val = 0;             // val will store the state of button
int old_val = 0;        // Store the previous value of val
int state = 0;         // 0 = LED off, 1= LED on

void setup(){
  pinMode(LED, OUTPUT); //set pin 13 to output for the LED
  pinMode(button, INPUT); //Set pin 7 to input to listen for the button 
}

void loop(){
val = digitalRead(button); //read input value from button, set to val

// check if the button was tapped before changing state
if ((val == HIGH) && (old_val == LOW)){ // if the button is pressed and was previously not
  state = 1 - state; // change state
  delay(100); // 100ms delay to ignore push button noise
}

old_val = val; // val is now old, let's store it

if (state == 1) {
    digitalWrite(LED, HIGH); // turn LED ON
  } else {
    digitalWrite(LED, LOW);
  }
}
