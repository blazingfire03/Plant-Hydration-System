void setup() {
  Serial.begin(9600); // initialize serial communication
}

void loop() {
  int moistureVal = analogRead(A0);  // read the input on analog pin 0:
  Serial.println(moistureVal); // print out the analog val
  delay(30);
}
