 /*Turns an LED on for one second, then off for one second, repeatedly. 
  * Using digital output
*/
void setup() {
  // put your setup code here, to run once:
pinMode (10, OUTPUT); // initialize digital pin 10 as an output.
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(10,HIGH);   // turn the LED on (HIGH is the voltage level)
delay (1000);            // wait for a second
digitalWrite(10,LOW);    // turn the LED off by making the voltage LOW
delay (1000);            // wait for a second
}
