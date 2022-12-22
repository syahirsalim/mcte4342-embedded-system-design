int POT =A0;
int LED =3;
int analogreadvalue;
int analogwritevalue;

// Voltmeter
int analogInput = 1;
float Vout = 0.00;
float Vin = 0.00;
float R1 = 100000.00; // resistance of R1 (100K) 
float R2 = 10000.00; // resistance of R2 (10K) 
int val = 0;
void setup(){
  Serial.begin(9600);
  pinMode(POT, INPUT);
  pinMode(LED,OUTPUT);
   //Voltmeter
   pinMode(analogInput, INPUT); //assigning the input port
   Serial.begin(9600); //BaudRate
}
void loop(){

  analogreadvalue = analogRead(POT);
  analogwritevalue= (255./1023.) * analogreadvalue;

  analogWrite(LED, analogwritevalue);
  Serial.print("Analog Value To Led: ");
  Serial.println(analogwritevalue);

   // Voltmeter
   val = analogRead(analogInput);//reads the analog input
   Vout = (val * 5.00) / 1024.00; // formula for calculating voltage out i.e. V+, here 5.00
   Vin = Vout / (R2/(R1+R2)); // formula for calculating voltage in i.e. GND
   if (Vin<0.09)//condition 
   {
     Vin=0.00;//statement to quash undesired reading !
  } 
Serial.print("\t Voltage of the given source = ");
Serial.println(Vin);
delay(1000); //for maintaining the speed of the output in serial moniter
}
