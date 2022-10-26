// Example code - turns on an LED on for one second, then off for one second, repeatedly.

int myled = 13; // give pin 13 a name
void setup() { // the setup routine runs once when you press reset:
  // put your setup code here, to run once:
  pinMode(myled, OUTPUT); // initialize the digital pin as an output.
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(myled, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000); // wait for a second
  digitalWrite(myled, LOW); // turn the LED off by making the voltage LOW
  delay(1000); // wait for a second
}
