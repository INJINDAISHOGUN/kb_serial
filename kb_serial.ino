int bt1 = 16;
int bt2 = 14;
int fire1 = 12;
int fire2 = 15;
char key;

void setup(){
  pinMode(bt1,INPUT);
  pinMode(bt2,INPUT);
  pinMode(fire1,OUTPUT);
  pinMode(fire2,OUTPUT);
  digitalWrite(fire1,HIGH);
  digitalWrite(fire2,HIGH);
  
}

void loop(){
  key = Serial.read();
  Serial.println(key);
  delay(10);
  switch (key) {
    case 'a': digitalWrite(fire1,LOW);
      Serial.println("fire1 ON");
      delay(5000);
      break;
    case 'b': digitalWrite(fire2,LOW);
      Serial.println("fire2 ON");
      delay(5000);
      break;
    default:  digitalWrite(fire1,HIGH);
      digitalWrite(fire2,HIGH);
      Serial.println("CLOSE IT ALL");   
  }
}
