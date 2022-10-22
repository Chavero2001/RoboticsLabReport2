/*
Digital Output
Light Chaser 2: Each LED is turned on and off in a syncronized way, from the first to the last, and then it returns to the first.  
 */
int del= 50; //The delay for each LED
void setup() {
  // Set the pins 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  //First LED
  digitalWrite(13, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(13, LOW);    // turn the LED off 
  delay(del);                       
  //Second LED
  digitalWrite(12, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(12, LOW);    // turn the LED off 
  delay(del);                       
  //Third LED
  digitalWrite(11, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(11, LOW);    // turn the LED off 
  delay(del);                       
  //Fourth LED
  digitalWrite(10, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(10, LOW);    // turn the LED off 
  delay(del);                       
  //Fifth LED
  digitalWrite(9, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(9, LOW);    // turn the LED off 
  delay(del);  
  //Fourth LED
  digitalWrite(10, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(10, LOW);    // turn the LED off 
  delay(del); 
  //Third LED
  digitalWrite(11, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(11, LOW);    // turn the LED off 
  delay(del);    
  //Second LED
  digitalWrite(12, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(12, LOW);    // turn the LED off 
  delay(del); 
  //After this, it starts again with the first LED                    
}
