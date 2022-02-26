const int LED=9;
const int BUTTON=2;


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);
  
}

void loop() {
  if (digitalRead(BUTTON)==LOW){
    analogWrite(LED,0);
  }
  else{
    analogWrite(LED,127);
  }
}
