/*
Digital output & use of millis()
The goal of this program is to make blink the LED without using delay(), since the use of this function is problematic if there's another action happening
*/

//Variables for the blink are declarated
int ledState = LOW; //The LED is initially turned off
unsigned long previousMillis = 0; //Since it starts counting from 0, the initial value of previousMillis is 0
const long interval = 5000; //The interval will be 5 seconds

//Variable for the PB is declarated
int sensor;

void setup() {
  //The pins are set up
  pinMode(13, OUTPUT);
  
  pinMode(10,INPUT_PULLUP);
  Serial.begin(9600); //Communication with the monitor
  
}

void loop() {
 
  unsigned long currentMillis = millis(); //millis returns the value of miliseconds. CurrentMillis are the miliseconds that have passed. 
  if (currentMillis - previousMillis >= interval){  //The interval is the time of turning on and off
    previousMillis = currentMillis; 
    if (ledState == LOW){ 
ledState = HIGH;
    } else {
ledState = LOW;
    }
  }
  digitalWrite(13,ledState); //it determines if the LED is on or off

//This part is for the Push Button
  sensor = digitalRead(10);
  delay(1);
  Serial.print("PB is ");
  Serial.print(sensor);
  Serial.println();
  
  
              
}
