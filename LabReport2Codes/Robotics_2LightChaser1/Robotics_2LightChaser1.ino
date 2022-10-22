//Digital output
//The goal of this program is to turn on 5 LEDs. They will be turned on one after other, with a delay in between of 100 miliseconds
int del= 100; 

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
  digitalWrite(13, HIGH);   // turn the LED1 on 
  delay(del);                      
  digitalWrite(13, LOW);    // turn the LED1 off 
  delay(del);                       
  //Second LED
  digitalWrite(12, HIGH);   // turn the LED2 on 
  delay(del);                      
  digitalWrite(12, LOW);    // turn the LED2 off 
  delay(del);                       
  //Third LED
  digitalWrite(11, HIGH);   // turn the LED3 on 
  delay(del);                      
  digitalWrite(11, LOW);    // turn the LED3 off 
  delay(del);                       
  //Fourth LED
  digitalWrite(10, HIGH);   // turn the LED4 on 
  delay(del);                      
  digitalWrite(10, LOW);    // turn the LED4 off 
  delay(del);                       
  //Fifth LED
  digitalWrite(9, HIGH);   // turn the LED5 on 
  delay(del);                      
  digitalWrite(9, LOW);    // turn the LED5 off 
  delay(del);                       
}
