void setup(){
  
  //  initialize the serial communication
  Serial.begin(9600);
  
  //  set the timeout
  Serial.setTimeout(100);
  
  //  configure pin 3 as output
  pinMode(3 , OUTPUT);
}

void loop(){

  //  check if data is
  if (Serial.available()){
    
    //  read the data and convert it to an integer
    int state = Serial.readString().toInt();
    
    //  check if data received is 1, turn on the LED
    if (state  ==  1)digitalWrite(3,HIGH);
    
    //  else turn off the led
    else digitalWrite(3,LOW);
  }
  
  //  for better working of simulator
  delay(10);
}