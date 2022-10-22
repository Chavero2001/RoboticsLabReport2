/*
Digital Input
Arduino PB Pull Down: When the PB is not pressed, the serial monitos displays the value 0. When it is pressed the value changed to 1 
*/
int sensor;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
pinMode(10,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor=digitalRead(10);

  Serial.print(sensor);
  Serial.println();

}
