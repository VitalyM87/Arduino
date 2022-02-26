const int BLED=9;
const int GLED=10;
const int RLED=11;
const int BUTTON=2;
boolean lastButton = LOW;
boolean currentButton = LOW;
int ledMode = 0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  
  pinMode(BLED,OUTPUT);
  pinMode(GLED,OUTPUT);
  pinMode(RLED,OUTPUT);
  pinMode(BUTTON,INPUT);  
}

boolean debounce(boolean last) {
  boolean current = digitalRead(BUTTON);
  if (last != current) {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}

void setMode(int mode) {
  //КРАСНЫЙ
  if (mode==1) {
    analogWrite(RLED,255);
    analogWrite(GLED,0);
    analogWrite(BLED,0);
  }
  //ЗЕЛЕНЫЙ
  else if (mode==2) {
    analogWrite(RLED,0);
    analogWrite(GLED,255);
    analogWrite(BLED,0);
  }
  //СИНИЙ
  else if (mode==3) {
    analogWrite(RLED,0);
    analogWrite(GLED,0);
    analogWrite(BLED,255);
  }
  //ФИОЛЕТОВЫЙ
  else if (mode==4) {
    analogWrite(RLED,255);
    analogWrite(GLED,0);
    analogWrite(BLED,255);
  }
  //ЗЕЛЕНОВАТО-ГОЛУБОЙ
  else if (mode==5) {
    analogWrite(RLED,0);
    analogWrite(GLED,255);
    analogWrite(BLED,127);
  }
  //ОРАНЖЕВЫЙ
  else if (mode==6) {
    analogWrite(RLED,255);
    analogWrite(GLED,127);
    analogWrite(BLED,0);
  }
  //БЕЛЫЙ
  else if (mode==7) {
    analogWrite(RLED,170);
    analogWrite(GLED,170);
    analogWrite(BLED,170);
  }
  //ОТКЛЮЧЕН
  else {
    digitalWrite(RLED,LOW);
    digitalWrite(GLED,LOW);
    digitalWrite(BLED,LOW);
  }
}

void loop() {
  currentButton = debounce(lastButton);
  if (lastButton == LOW && currentButton == HIGH) {
    ledMode++;
  }
  lastButton = currentButton;
  if (ledMode==8) ledMode = 0;
  setMode(ledMode);
}
