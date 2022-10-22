/*
Digital Output
Relay Motor: A coil relay is connected to the Arduino. The Normally Open Contact of the Relay is connected to a Motor supplied by a 9v battery
If the realy is turned on, the motor is also turned on. 
 */

int del=5000;
void setup() {
  // Set the pins 
  pinMode(10, OUTPUT); 
}

void loop() {
                  
  //This part controls the Coil Relay
  digitalWrite(10, HIGH);   // turn the motor on 
  delay(del);                      
  digitalWrite(10, LOW);    // turn the motor off 
  delay(del);                       
                  
}
