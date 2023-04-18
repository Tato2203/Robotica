const int buttonPin = 2;     // the number of the pushbutton pin

const int FRLegForw = 
const int FRLegUp
const int FLLegForw
const int FLLegUp
const int RLLegForw
const int RRLegForw

void setup() {
  // put your setup code here, to run once:
  pinMode(FRLegForw, OUTPUT);
  pinMode(FRLegUp, OUTPUT);
  pinMode(FLLegForw, OUTPUT);
  pinMode(FLLegUp, OUTPUT);
  pinMode(RLLegForw, OUTPUT);
  pinMode(RRLegForw, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
