//Analog input
//The Arduino will read the voltage of a potentiometer, and will display the value on the Serial Monitor 

//First the variables must be declared, in this case sensor for the reading of bits, and v for the convertion from bits to voltage.
float sensor; //sensor is a float because operations with integers only give back integers, so in order to have decimals in the voltage, it is necessary to use float
float v;
int sensorInt; //This converts the float of the sensor to an integer, since it is not necessary to display .00

void setup() {
  
pinMode(A0,INPUT_PULLUP);

  Serial.begin(9600);
  // Print a message to the LCD.

}

void loop() {
 

sensor=analogRead(A0); //HERE IT READS 
v=sensor/(1023/5);
sensorInt=sensor; //THIS CONVERTS THE FLOAT OF THE SENSOR TO AN INTEGER


Serial.print("Voltage: ");
Serial.print(v); //THIS PRINTS THE VOLTAGE
Serial.print("v  ");
Serial.print("Bits: "); 
Serial.print(sensorInt); //THIS PRINTS THE BITS AS AN INTEGER
Serial.println();

delay(100);

}
