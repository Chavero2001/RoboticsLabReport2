/*
Digital Input & Digital Output
RGB and PB: When the PB is not pressed, the RGB is white. Then, when it is pressed, the RFB is turned off
*/
int sensor;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
pinMode(10,INPUT_PULLUP); //Using INPUT_PULLUP the arduino uses its internal resistance, thus it is not necessary to use another one in the circuit
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor=digitalRead(10); //Read if the sensor is pressed or not

  Serial.print(sensor); //Displays the value on the Serial Monitor
  Serial.println();

if (sensor==1){ //If the sensor is not pressed, then the RGB will be yellow (Red + Green)
  //Turn Red and Green
  digitalWrite(11,1); //Red
  digitalWrite(12,1);//Green
  digitalWrite(13,0); //Blue
} else {
//Turn on Blue and Red
  digitalWrite(11,1); //Red
  //If the sensor is pressed, then the RGB will be purple (Red + Blue)
  digitalWrite(12,0); //Green
  digitalWrite(13,1); //Blue
};

  
  

}
