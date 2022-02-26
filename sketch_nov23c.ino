const int LED=9;
const int LED2=6;
void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 digitalWrite(LED_BUILTIN, LOW);
 pinMode (LED, OUTPUT);
 pinMode (LED2, OUTPUT);
}

void loop() {
 analogWrite(9,160);
}
