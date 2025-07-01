#define ldrPIn A0
int value; 
void setup() {
  Serial.begin(9600);
  pinMode(ldrPIn, INPUT);
}
void loop() {
  value = analogRead(ldrPIn);
  Serial.println(value);
}
