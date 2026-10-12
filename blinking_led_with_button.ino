void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);                   // output is the LED light
  pinMode(5, INPUT_PULLUP);             // set D5 as an input pin for the button
}

void loop() {
  // put your main code here, to run repeatedly:
  bool buttonState = digitalRead(5);    // track button press

  if (buttonState == LOW) {
    digitalWrite(2, HIGH);              // button held down. turn LED on. HIGH = high state
  } else {
    digitalWrite(2,LOW);                // button released. turn LED off. LOW = low state
  }  
}
