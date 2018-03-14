
int LED = 8;                               //номер ноги светодиода
int MIC = 0;

class a{
 int i;
};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 //pinMode (LED, OUTPUT); 
 
 
}



  
void loop() {
  // put your main code here, to run repeatedly:
   int  val=analogRead(MIC);                  
  
  Serial.println(val,DEC);
  
  analogWrite(LED, val);
 

}
