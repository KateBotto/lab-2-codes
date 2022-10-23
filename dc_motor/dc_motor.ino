/* fan on for 10 seconds then off for 10 seconds
 *  used digital output
 */
const int relay = 8; // the relay is connected to pin 8 of the Adruino board

void setup()
{
//pinMode(button, INPUT); 
pinMode(relay, OUTPUT);
}
 
void loop()
{

digitalWrite(relay, HIGH); // The motor starts to run
delay (10000);


digitalWrite(relay, LOW); // The motor stops running
delay (10000);
}
