int x = 784545343;
int z = 98;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

int s = p(x,z);

Serial.print(s);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = Serial.read();
  if(i!=-1){
  Serial.print(i);
  }
}

int p(int x, int z)
{
  return (x*z);
}

