const byte LED = 13;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello,World!");
  Serial.print("\tLED pin is: ");
  Serial.print(LED);
  Serial.println("\n");
  pinMode(LED,OUTPUT);
}

void loop() 
{
  char val;
  if(Serial.available())
  {
    val = Serial.read();
    switch(val)
    {
      
      case'0':
      digitalWrite(13,LOW);
      Serial.println("LED OFF");
      break;
      case'1':
      digitalWrite(13,HIGH);
      Serial.println("LED ON");
      break;
    }
  }
}
