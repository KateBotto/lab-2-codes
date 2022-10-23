/* colour selector, use word color chart between 0-255 
   as range and make any color using the red, green and blue leds.
   analog output
*/
void setup() {
  // put your setup code here, to run onc
 pinMode(9,OUTPUT); // make pin 9 an output
 pinMode(6,OUTPUT);// make pin 6 an output
 pinMode(5,OUTPUT);// make pin 5 an output
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(9,183); // chosen number between 0-255 (range)

analogWrite(10,180);// chosen number between 0-255 (range)

analogWrite (11,161);// chosen number between 0-255 (range)

}
