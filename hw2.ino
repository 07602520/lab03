float Analogin;
void setup() {
  Serial.begin(9600);
      
}

void loop() {
  // put your main code here, to run repeatedly:
float Vin;
int i;
for(i=0;i<=5;i++){
      Analogin =0.7*Analogin+0.3*analogRead(A0);
      
      Vin=Analogin*5/1024;
      Serial.println(Vin);
      delay(500);
}Serial.println("  ");
}
