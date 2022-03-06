const int LED=9;
void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
 digitalWrite(LED_BUILTIN, LOW);
 pinMode (LED, OUTPUT);
 }

void loop() {
  /*digitalWrite(LED, HIGH); 
  delay(1000);                      
  digitalWrite(LED, LOW);  
  delay(1000);*/
  /*for (int i=1; i<=100; i=i+2)
  {
    digitalWrite(LED,HIGH);
    delay(i);
    digitalWrite(LED,LOW);
    delay(i);
  }
  for (int i=100; i>=1; i=i-2)
  {
    digitalWrite(LED,HIGH);
    delay(i);
    digitalWrite(LED,LOW);
    delay(i);
  }*/
  for (int i=0; i<256; i++)
  {
    analogWrite(LED,i);
    delay(5);
  }
  for (int i=255; i>=0; i--)
  {
    analogWrite(LED,i);
    delay(5);    
  }
 }
 
