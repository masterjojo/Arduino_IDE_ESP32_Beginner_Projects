void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);               // output is the LED light
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(2, HIGH);            // turn LED on
  delay(500);                       // LED turns on for half a second
  digitalWrite(2,LOW);              // turn LED off
  delay(500);                       // LED turns off for half a second
}
