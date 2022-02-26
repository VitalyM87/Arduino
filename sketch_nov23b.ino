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
  digitalWrite(LED, HIGH);
  delay(40);
  digitalWrite(LED, LOW);
  delay(40);
 };
 for (int i=1; i<=7; i=i+1)
 {
  digitalWrite(LED2, HIGH);
  delay(40);
  digitalWrite(LED2, LOW);
  delay(40);
 } 
}
