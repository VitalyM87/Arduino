const int LED=9;
const int LED2=6;
void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 digitalWrite(LED_BUILTIN, LOW);
 pinMode (LED, OUTPUT);
 pinMode (LED2, OUTPUT);
}

void loop() {
 for (int i=1; i<=7; i=i+1)
 {
  analogWrite(LED, 127);
  delay(40);
  analogWrite(LED, 1);
  delay(40);
 };
 for (int i=1; i<=7; i=i+1)
 {
  analogWrite(LED2, 127);
  delay(40);
  analogWrite(LED2, 1);
  delay(40);
 } 
}
