/*
Analog Output
The RGB will combine different tones of red, green and blue to display an specific color. The intensity of each color must be a number between 0 and 255
due to Arduino uses 8 bits for analog output.
*/

void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
}

void loop() {
  
  //Here the intensity of each color is selected 
  analogWrite(11,192); //Blue
  analogWrite(10,34); //Green
  analogWrite(9,144);  //Red
  //The result of this combination is a light tonality of purple
}

  

