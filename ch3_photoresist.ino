
//монитор значений фоторезистора
const int photoresistorpin=0;
int value=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(photoresistorpin);
  Serial.println(value);
  delay(100);
}

/*
//ночник
const int LED=9;        // LED Anode on pin 9 (PWM)
const int LIGHT=0;       // Light Sensor on Analog Pin 0
const int MIN_LIGHT=200; // Minimum Expected light value
const int MAX_LIGHT=900; // Maximum Expected Light value
int value = 0;             // Variable to hold the analog reading

void setup()
{
  pinMode(LED, OUTPUT); // Set LED pin as output
  Serial.begin(9600);
}

void loop()
{
  value = analogRead(LIGHT);                      // Read the light sensor
  value = map(value, MIN_LIGHT, MAX_LIGHT, 255, 0); // Map the light reading
  value = constrain(value, 0, 255);                 // Constrain light value
  analogWrite(LED, value);                       // Control the White LED
  Serial.println(value);
  delay(1000);
}
*/
