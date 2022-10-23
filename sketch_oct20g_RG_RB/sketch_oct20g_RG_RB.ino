
/* Green led is on when button is not pressed, blue led turns on when button is pressed.
 *  used digital output and input
 */


int RedPin=8; //declaire variables
int GreenPin=9;//declaire variables
int BluePin=10;//declaire variables
int buttonPin=3://declaire variables
int buttonRead;//declaire variables

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600); // start serial monitor
pinMode(LEDPin,OUTPUT); //defines LEDPin as an output
pinMode(buttonPin,INPUT); // defines button pin as an input
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead); //print information in serial monitor
delay(2000);
if (buttonRead == 1) { // 1=5v
  digitalWrite (RedPin, LOW) // low = led off when button pressed
  digitalWrite (GreenPin, HIGH)// high = led on when button not pressed
  digitalWrite (BluePin, LOW)// low = led off when button pressed
}
if (buttonRead == 0) { //1=0v
  digitalWrite (RedPin, LOW) // low = led off when button pressed
  digitalWrite (GreenPin, LOW)// low = led off when button pressedv
  digitalWrite (BluePin, HIGH)// high = led on when button not pressed
}
}
