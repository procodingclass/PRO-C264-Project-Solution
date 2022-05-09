void setup()
{
  //  initialize the serial communication
  Serial.begin(9600);
}

void loop()
{
  
  //  read the state of pin 2
  //  convert it to string format
  
  String state = String(digitalRead(2));
  
  //  send that data towards arduino 2
  
  Serial.print(state);
  
  //  wait for 500 ms
  
  delay(500);
}