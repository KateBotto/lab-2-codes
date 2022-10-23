
/*
   Reads an analog input on pin 1, converts it to voltage, and prints the result to the Serial 
   Monitor and turns on leds the more the voltage increases, the more leds turn on. 
uses analog input and output
 
 */

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);   // initialize serial communication at 9600 bits per second:
  pinMode (11,OUTPUT);  // initialize the LED pin 11 as an output:
  pinMode (10,OUTPUT);  // initialize the LED pin 10 as an output:
  pinMode (9,OUTPUT);   // initialize the LED pin 9 as an output:
  pinMode (8,OUTPUT);   // initialize the LED pin 8 as an output:
  pinMode (7,OUTPUT);   // initialize the LED pin 7 as an output:

}

// the loop routine runs over and over again forever:
void loop() {
  
 
  int sensorValue = analogRead(A1); // read the input on analog pin 1
// Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V)
  float voltage = 0.0049*sensorValue;
  
  Serial.print ("the bit value = ");      // print out the value you read
  Serial.print (sensorValue   );          // print out the value you read
  Serial.print ("     Voltage value = "); // print out the value you read
  Serial.println (voltage);               // print out the value you read


 
  if (sensorValue > 0){
  digitalWrite(11,HIGH); // turn the LED on HIGH if the voltage level is over 0
  } else {
    digitalWrite (11,LOW); // turn the LED off LOW if the voltage level is not over 0
  }
   if (sensorValue > 256){
  digitalWrite(10,HIGH); // turn the LED on HIGH if the voltage level is over 256
  } else {
    digitalWrite (10,LOW); // turn the LED off LOW if the voltage level is not over 256
  }
     if (sensorValue > 511){
  digitalWrite(9,HIGH); // turn the LED on HIGH if the voltage level is over 511
  } else {
    digitalWrite (9,LOW); // turn the LED off LOW if the voltage level is not over 511
  }
       if (sensorValue > 767){
  digitalWrite(8,HIGH); // turn the LED on HIGH if the voltage level is over 767
  } else {
    digitalWrite (8,LOW); // turn the LED off LOW if the voltage level is not over 767
  }
       if (sensorValue > 1022){
  digitalWrite(7,HIGH); // turn the LED on HIGH if the voltage level is over 1022
  } else {
    digitalWrite (7,LOW); // turn the LED off LOW if the voltage level is not over 1022
  } 
  }
 
