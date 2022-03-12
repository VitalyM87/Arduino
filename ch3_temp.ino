const int BLED=9;
const int GLED = 10;
const int RLED = 11;
const int TEMP = A0;
const int LOWER_BOUND=157;
const int UPPER_BOUND=161;
int val = 0;

void setup() {
  pinMode (BLED, OUTPUT);
  pinMode (GLED, OUTPUT);
  pinMode (RLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(TEMP);
  if (val<LOWER_BOUND) {
    digitalWrite(RLED,HIGH);
    digitalWrite(GLED,HIGH);
    digitalWrite(BLED,LOW);
  }
  else if (val>UPPER_BOUND) {
    digitalWrite(RLED,LOW);
    digitalWrite(GLED,HIGH);
    digitalWrite(BLED,HIGH);
  }
  else {
    digitalWrite(RLED,HIGH);
    digitalWrite(GLED,LOW);
    digitalWrite(BLED,HIGH);
  }
  
  Serial.println(val);
  delay(500);
}
