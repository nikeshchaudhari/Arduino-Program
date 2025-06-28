#define row1 13
#define row2 12
#define row3 11

void setup(){
pinMode(row1,OUTPUT);
pinMode(row2,OUTPUT);
pinMode(row3,OUTPUT);
}

void loop(){ 
  upDown();
  delay(2000);
  
  bottomUP();
    delay(2000);
 
 

}
void allON(){
  digitalWrite(row1,HIGH);
  digitalWrite(row2,HIGH);
  digitalWrite(row3,HIGH);


}
void allOFF(){
  digitalWrite(row1,LOW);
  digitalWrite(row2,LOW);
  digitalWrite(row3,LOW);

}
void upDown(){
  digitalWrite(row1,HIGH);
  delay(1000);
  digitalWrite(row2,HIGH);
  delay(1000);
  digitalWrite(row3,HIGH);
  delay(1000);
}
void bottomUP(){
  digitalWrite(row3,HIGH);
  delay(1000);
  digitalWrite(row2,HIGH);
  delay(1000);
  digitalWrite(row1,HIGH);
  delay(1000);
}
