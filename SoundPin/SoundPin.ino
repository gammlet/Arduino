int soundPin =7;
void setup()
{
Serial.begin(9600);

pinMode(soundPin,OUTPUT);


  
//digitalWrite(soundPin, HIGH);
 // delay(1000);
//digitalWrite(soundPin, LOW);

}

void sound(){
for(int i=0;i<80;i++){
  digitalWrite(soundPin,HIGH);
  delay(2);
  digitalWrite(soundPin,LOW);
  delay(2);
  }
 digitalWrite(soundPin,HIGH);
}

void loop() {

 int  val=analogRead(0);
 if(val>100){
   sound();
  }
  
  Serial.println(val,DEC);
  // put your main code here, to run repeatedly:
  //tone(soundPin,500,1000);

  //delay(2000);

 // noTone(soundPin);
  //tone(soundPin,0);
   //tone(soundPin,0);

  ///delay(2000);
}
