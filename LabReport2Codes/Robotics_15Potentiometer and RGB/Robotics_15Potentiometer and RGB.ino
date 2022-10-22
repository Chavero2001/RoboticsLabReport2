//Analog input & Analog ouput
//The Arduino will read the voltage of a potentiometer. And RGB connected to the Arduino will turn on or off, and will change through different colors until having white, in accordance to the voltage

//Variables
float sensor; //sensor is a float because operations with integers only give back integers, so in order to have decimals in the voltage, it is necessary to use float
float v;
int sensorInt; //This converts the float of the sensor to an integer, since it is not necessary to display .00
float RGB; //This will be used to convert the input of 10bits to an output of 8bits
int RGBint; //This is to change the float to an integer

void setup() {
  
pinMode(A0,INPUT_PULLUP);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);

  Serial.begin(9600);

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


RGB=(255*sensor)/1023;
RGBint=RGB;

Serial.print("   RGBcode:");
Serial.print(RGBint);
Serial.println();

if(v>=5){ //This will turn on at the end, adding to form white
analogWrite(13,RGBint); //Blue
} else{
analogWrite(13,0);  
};

if(v>(0.5)){ //if the voltage is greater than 0.5, the intensity of the Green will be equal to the convertion of 10bits to 8bits 
analogWrite(12,RGBint); //Green
} else{
analogWrite(12,0);  
};

if(v>=(3.5)){ //if the voltage is greater or equal than 3.5, the intensity of the Green will be equal to the convertion of 10bits to 8bits 
analogWrite(11,RGBint); //Red
} else{
analogWrite(11,0);  
};
delay(100);

}
