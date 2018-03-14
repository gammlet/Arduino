 int LED = 8;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
 pinMode (LED, OUTPUT); 
 
 
}

bool Sound = false;

  
void loop() {
  // put your main code here, to run repeatedly:
   int  val=analogRead(0);
  
  Serial.println(val,DEC);
 

  if(val>100){
     digitalWrite(LED, HIGH);
     if(!Sound){
        tone(13,1000);
        Sound = true;
     }
     //
     //noTone(13);
    }
  else{
     digitalWrite(LED, LOW);
     if(Sound){
        noTone(13);
        Sound = false;
     }
     //tone(13,1,10);
     //noTone(13);
    }

}
