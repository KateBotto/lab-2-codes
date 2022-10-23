/* color range of rgb freom white to black
uses analog input and output*/

// Pins of the RGB LED, constants won't change. They're used here to set pin numbers:
const int redPin = 10; 
const int greenPin = 9; 
const int bluePin = 8; 

// Analog input from the potentiometer
const int potPin = A0;

// Values for each pin of the RGB LED.
int currentColorValueRed;
int currentColorValueGreen;
int currentColorValueBlue;
 
void setup()
{
  Serial.begin (9600);
  pinMode(redPin, OUTPUT);  // initialize digital pin 10 as an output
  pinMode(greenPin, OUTPUT);// initialize digital pin 9 as an output
  pinMode(bluePin, OUTPUT); // initialize digital pin 8 as an output
}
 
void loop()
{
  // Reading the value of the pot pin (it's always 0 - 1024) 
  // and converting it to a RGB range (0 - 255).
  int potPinValue = map(analogRead(potPin), 0, 1024, 0, 255);
 
 float voltage = 0.0049*potPinValue;
  Serial.print ("the bit value = ");// print out the value you read
  Serial.print (potPinValue   );// print out the value you read
  Serial.print ("     Voltage value = ");// print out the value you read
  Serial.println (voltage);// print out the value you read
  
 
  if (potPinValue <= 42.5) {
    currentColorValueRed = 255;
    currentColorValueGreen = potPinValue * 6;
    currentColorValueBlue = 0;
   }
   
   if ((potPinValue > 42.5) && (potPinValue <= 85)) {
    currentColorValueRed = 255 - (potPinValue - 43) * 6;
    currentColorValueGreen = 255;
    currentColorValueBlue = 0;
   }
   
   if ((potPinValue > 85) && (potPinValue <= 127.5)) {
    currentColorValueRed = 0;
    currentColorValueGreen = 255;
    currentColorValueBlue = (potPinValue - 85) * 6;
   }
   
  if ((potPinValue > 127.5) && (potPinValue <= 170)) {
    currentColorValueRed = 0;
    currentColorValueGreen = 255 - (potPinValue - 127.5) * 6;
    currentColorValueBlue = 255;
  }
   
  if ((potPinValue > 170) && (potPinValue <= 212.5)) {
    currentColorValueRed = (potPinValue - 170) * 6;
    currentColorValueGreen = 0;
    currentColorValueBlue = 255;
  }
  
  if ((potPinValue > 212.5) && (potPinValue <= 255)) {
    currentColorValueRed = 255;
    currentColorValueGreen = 0;
    currentColorValueBlue = 255 - (potPinValue - 212.5) * 6;
  }
   
  analogWrite(redPin, currentColorValueRed);
  analogWrite(bluePin, currentColorValueBlue);
  analogWrite(greenPin, currentColorValueGreen);
}
