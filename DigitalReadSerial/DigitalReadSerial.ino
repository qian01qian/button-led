
// digital pin 2 has a pushbutton attached to it. Give it a name:
int pushButton = 3;
const int ledPin = 13;    // the number of the LED pin
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);

  // print out the state of the button:
  Serial.println(buttonState);
  delay(10);  // delay in between reads for stability
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
