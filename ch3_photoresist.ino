// Automatic Night Light

const int LED=9;        // LED Anode on pin 9 (PWM)
const int LIGHT=0;       // Light Sensor on Analog Pin 0
const int MIN_LIGHT=200; // Minimum Expected light value
const int MAX_LIGHT=900; // Maximum Expected Light value
int val = 0;             // Variable to hold the analog reading

void setup()
{
  pinMode(LED, OUTPUT); // Set LED pin as output
  Serial.begin(9600);
}

void loop()
{
  val = analogRead(LIGHT);                      // Read the light sensor
  val = map(val, MIN_LIGHT, MAX_LIGHT, 255, 0); // Map the light reading
  val = constrain(val, 0, 255);                 // Constrain light value
  analogWrite(LED, val);                       // Control the White LED
  Serial.println(val);
  delay(1000);
}
