int RedPin=8;     //declaire variables
int GreenPin=9;   //declaire variables
int BluePin=10;   //declaire variables
int buttonPin=12: //declaire variables
int buttonRead;   //declaire variables

void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);  // start serial monitor
pinMode(LEDPin,OUTPUT); //declaire LEDPin an output
pinMode(buttonPin,INPUT); //declaire buttonpin an input
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead); //print information in serial monitor
delay(2000);                //delay of 2 seconds
if (buttonRead == 1) { // 1=5v
  digitalWrite (RedPin, HIGH) // high = led on when button not pressed
  digitalWrite (GreenPin, HIGH)// high = led on when button not pressed
  digitalWrite (BluePin, HIGH)// high = led on when button not pressed
}
if (buttonRead == 0) { //1=0v
  digitalWrite (RedPin, LOW) // low = led off when button pressed
  digitalWrite (GreenPin, LOW)// low = led off when button pressed
  digitalWrite (BluePin, LOW)// low = led off when button pressed
}
}
