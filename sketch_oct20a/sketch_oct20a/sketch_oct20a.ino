void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode (2,OUTPUT);
  pinMode (3,OUTPUT);
  pinMode (4,OUTPUT);
  pinMode (5,OUTPUT);
  pinMode (6,OUTPUT);
  pinMode (7,OUTPUT);
  pinMode (8,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  
  
  // read the input on analog pin 0:
  
  int sensorValue = analogRead(A0);

  float voltage = 0.0049*sensorValue;
  // print out the value you read:
  
  Serial.print ("the bit value = ");
  Serial.print (sensorValue   );
  Serial.print ("     Voltage value = ");
  Serial.println (voltage);
  if (sensorValue > 0){
  digitalWrite(8,HIGH);
  } else {
    digitalWrite (8,LOW);
  }
   if (sensorValue > 171){
  digitalWrite(7,HIGH);
  } else {
    digitalWrite (7,LOW);
  }
     if (sensorValue > 341){
  digitalWrite(6,HIGH);
  } else {
    digitalWrite (6,LOW);
  }
       if (sensorValue > 512){
  digitalWrite(5,HIGH);
  } else {
    digitalWrite (5,LOW);
  }
       if (sensorValue > 682){
  digitalWrite(4,HIGH);
  } else {
    digitalWrite (4,LOW);
  }
       if (sensorValue > 853){
  digitalWrite(3,HIGH);
  } else {
    digitalWrite (3,LOW);
  }
       if (sensorValue > 1022){
  digitalWrite(2,HIGH);
  } else {
    digitalWrite (2,LOW);
