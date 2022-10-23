/*
  AnalogReadSerial

  Reads an analog input on pin 1, prints the result to the Serial Monitor.
  

*/

// the setup routine runs once when you press reset:
void setup() {
  
  Serial.begin(9600);// initialize serial communication at 9600 bits per second:
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 1:
  int sensorValue = analogRead(A1);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
}
