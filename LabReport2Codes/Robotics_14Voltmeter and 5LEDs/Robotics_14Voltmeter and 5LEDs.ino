//Analog input & Digital ouput
//The Arduino will read the voltage of a potentiometer. Five LEDs connected to the Arduino will turn on or off in accordance to the voltage
//If the voltage is 1, the first LED will turn on, if the voltage is 2, the first to LEDs will turn on, and so on until the voltage is 5 and the five LEDs are turned on

//First the variables must be declared, in this case sensor for the reading of bits, and v for the convertion from bits to voltage.
float sensor; //sensor is a float because operations with integers only give back integers, so in order to have decimals in the voltage, it is necessary to use float
float v;
int sensorInt; //This converts the float of the sensor to an integer, since it is not necessary to display .00

void setup() {
  
pinMode(A0,INPUT_PULLUP);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);

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

if (v>=1){ //The voltage must be equal or greater than 1 to turn on the first LED
digitalWrite(13,1); //LED1 ON  
} else{
digitalWrite(13,0); //LED1 OFF  
}

if(v>=2){ //The voltage must be equal or greater than 2 to turn on the second LED
digitalWrite(12,1); //LED2 ON  
} else{
  digitalWrite(12,0); //LED1 OFF 
};

if(v>=3){ //The voltage must be equal or greater than 3 to turn on the third LED
digitalWrite(11,1); //LED3 ON  
} else{
  digitalWrite(11,0);
};

if(v>=4){ //The voltage must be equal or greater than 4 to turn on the fourth LED
digitalWrite(10,1); //LED4 ON
} else {
  digitalWrite(10,0);
}

if(v>=5){ //The voltage must be equal or greater than 5 to turn on the fifth LED
digitalWrite(9,1); //LED5 ON
} else {
  digitalWrite(9,0);
};


delay(100);

}
