int basinc;
const int arduLed1 = 4; //Ardustar Led 1
const int arduLed2 = 5; //Ardustar Led 2
const int arduLed3 = 6; //Ardustar Led 3
const int arduLed4 = 7; //Ardustar Led 4

int buzzer = 8;


void setup() {
     pinMode(buzzer, OUTPUT); 
      Serial.begin(9600);

     pinMode(arduLed1, OUTPUT);
     pinMode(arduLed2, OUTPUT);
     pinMode(arduLed3, OUTPUT);
     pinMode(arduLed4, OUTPUT);
     
}

void loop() {
  int basinc = analogRead(0);
  Serial.println(basinc);


  if(basinc > 100) {
    digitalWrite(arduLed1, HIGH);   // Led 1 yan
    digitalWrite(buzzer,HIGH); // ses açılır
  }
  else { 
    digitalWrite(arduLed1, LOW);   // Led 1 sön
    digitalWrite(buzzer,LOW); // ses kapanır
  }
     if(basinc > 200) {
    digitalWrite(arduLed1, HIGH); // Led 1-2 yan
    digitalWrite(arduLed2, HIGH); 
    digitalWrite(buzzer,HIGH); //ses açılır
  }
  else { 
    digitalWrite(arduLed1, LOW);  
    digitalWrite(arduLed2, LOW);// Led 1-2 sön
    digitalWrite(buzzer,LOW); //ses kapanır
  }
     if(basinc > 300) {
    digitalWrite(arduLed1, HIGH); 
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);// Led 1-2-3 yan
    digitalWrite(buzzer,HIGH);//ses açılır
  }
  else { 
    digitalWrite(arduLed1, LOW);  
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);// Led 1-2-3 sön
    digitalWrite(buzzer,LOW);//ses kapanır
  }
    if(basinc > 400) {
    digitalWrite(arduLed1, HIGH);  
    digitalWrite(arduLed2, HIGH);
    digitalWrite(arduLed3, HIGH);
    digitalWrite(arduLed4, HIGH);// Led 1-2-3-4 yan
    digitalWrite(buzzer,HIGH);  //ses açılır
  }
  else { 
    digitalWrite(arduLed1, LOW); 
    digitalWrite(arduLed2, LOW);
    digitalWrite(arduLed3, LOW);
    digitalWrite(arduLed4, LOW);// Led 1-2-3-4 sön
    digitalWrite(buzzer,LOW);  //ses kapanır
  }
}
