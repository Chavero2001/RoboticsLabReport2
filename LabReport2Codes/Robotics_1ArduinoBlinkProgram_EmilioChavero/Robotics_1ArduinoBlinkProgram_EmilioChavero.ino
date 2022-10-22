//Digital output
//The goal of the program to make a LED blink using arduinos

void setup() {
  // Set the pin 
  pinMode(10, OUTPUT); //It defines the pin 10 of the Arduino as an output
}

void loop() {
  digitalWrite(10, HIGH);   // turn the LED on 
  delay(1000);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off 
  delay(1000);                       // wait for a second
}
