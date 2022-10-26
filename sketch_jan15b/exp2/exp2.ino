// Analog Pin Operation

int myled = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(myled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int incomingByte = Serial.parseInt();
    Serial.print("I recieved: ");
    Serial.println(incomingByte, DEC);
    
    analogWrite(myled,incomingByte); // to change intensity of LED when user enters an integer between 0 and 255
  }
}
