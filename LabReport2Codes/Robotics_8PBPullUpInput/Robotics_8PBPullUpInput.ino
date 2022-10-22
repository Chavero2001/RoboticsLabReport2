/*
Digital Input
Arduino PB Pull Input PullUp: When the PB is not pressed, the serial monitor displays the value 1. When it is pressed the value changed to 0 
*/
int sensor;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
pinMode(10,INPUT_PULLUP); //Using INPUT_PULLUP the arduino uses its internal resistance, thus it is not necessary to use another one in the circuit

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor=digitalRead(10);

  Serial.print(sensor);
  Serial.println();

}
