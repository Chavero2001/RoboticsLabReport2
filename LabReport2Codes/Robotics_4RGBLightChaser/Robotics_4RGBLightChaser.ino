/*
Digital Output
RGB Light Chaser: The RGB turns blue, then green, red and finally white.  
 */

int del= 100; //Delay of 100 miliseconds

void setup() {
  // Set the pins 

  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
                  
  //Blue
  digitalWrite(11, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(11, LOW);    // turn the LED off 
  delay(del);                       
  //Green
  digitalWrite(10, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(10, LOW);    // turn the LED off 
  delay(del);                       
  //Red
  digitalWrite(9, HIGH);   // turn the LED on 
  delay(del);                      
  digitalWrite(9, LOW);    // turn the LED off 
  delay(del);  
  //White
  digitalWrite(11, HIGH);   // turn the LED on 
  digitalWrite(10, HIGH);   // turn the LED on 
  digitalWrite(9, HIGH);   // turn the LED on 
  delay(del);                      
                     
  digitalWrite(11, LOW);    // turn the LED off 
  digitalWrite(10, LOW);    // turn the LED off 
  digitalWrite(9, LOW);    // turn the LED off 
  delay(del);                     
}
