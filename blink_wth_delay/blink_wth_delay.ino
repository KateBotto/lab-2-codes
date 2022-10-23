/*
  Button

  Turns on and off LED connected to digital pin 10,
  when pressing a pushbutton attached to pin 4.
 digital input 
*/

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 4;  // the number of the pushbutton pin
const int ledPin = 10;    // the number of the LED pin

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  
  pinMode(ledPin, OUTPUT);// initialize the LED pin as an output:
  
  pinMode(buttonPin, INPUT);// initialize the pushbutton pin as an input:
}

void loop() {
  
  buttonState = digitalRead(buttonPin);// read the state of the pushbutton value:

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
