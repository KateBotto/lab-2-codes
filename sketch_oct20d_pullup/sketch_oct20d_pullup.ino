/* when button is pressed, serial motitor reads zero. when not pressed it reads 1.
 *  uses digital input
 */
int buttonPin=3; // digital pin 3 has a pushbutton attached to it
int buttonRead; 

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);// initialize serial communication at 9600 bits per second

pinMode(buttonPin,INPUT_PULLUP); // make the pushbutton's pin an input
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead = digitalRead(buttonPin);  // read the input pin
Serial.println(buttonRead); // print out the state of the button:
delay(500); //delay of 1/2 a second for each read of the input
}
