/*
  Blink

  Turns an LED on for one second one after the other then off for one second, repeatedly.
uses digital output.
  
*/
int time_wait = 1000; //delay when led on will be one second 
int time_off = 1000; // delay when led off will be one second
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_8-9-10-11 as outputs.
  pinMode(8, OUTPUT);  // initialize digital pin 8 as an output.
  pinMode(9, OUTPUT);  // initialize digital pin 9 as an output.
  pinMode(10, OUTPUT); // initialize digital pin 10 as an output.
  pinMode(11, OUTPUT); // initialize digital pin 11 as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for a second
  digitalWrite(8,LOW);    // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for a second 
  
  digitalWrite(9,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for a second
  digitalWrite(9,LOW);    // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for a second       
 
  digitalWrite(10,HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for a second
  digitalWrite(10,LOW);   // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for a second              
  
  digitalWrite(11,HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for a second  
  digitalWrite(11,LOW);   // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for a second

  /*digitalWrite(9,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(11,HIGH);
  delay(time_off);
  digitalWrite(9,LOW); 
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  delay(time_off);  */
}
