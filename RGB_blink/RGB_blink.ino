/* turn rgb on and off for two seconds while changing color every time. 
 *  used digital output

*/

int time_wait = 2000; //delay when led on will be two seconds 
int time_off = 2000; // delay when led off will be two seconds
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_8-9-10-11 as outputs.
  pinMode(8, OUTPUT);  // initialize digital pin 8 as an output.
  pinMode(9, OUTPUT);  // initialize digital pin 9 as an output.
  pinMode(10, OUTPUT); // initialize digital pin 10 as an output.
 
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for two seconds
  digitalWrite(8,LOW);    // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for two seconds 
  
  digitalWrite(9,HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for two seconds
  digitalWrite(9,LOW);    // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for two seconds       
 
  digitalWrite(10,HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for two seconds
  digitalWrite(10,LOW);   // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for two seconds              
  
 
  digitalWrite(8,HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9,HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(10,HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(time_wait);       // wait for two seconds
  digitalWrite(8,LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(9,LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(10,LOW;    // turn the LED off by making the voltage LOW
  delay(time_off);        // led off for two seconds   
}
