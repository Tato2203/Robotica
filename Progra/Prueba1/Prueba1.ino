const int FRRL_LegForw = 0;
const int FLRR_LegForw = 1;
const int FRRL_LegBack = 3;
const int FLRR_LegBack = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(FRRL_LegForw, OUTPUT);
  pinMode(FLRR_LegForw, OUTPUT);
  pinMode(FRRL_LegBack, OUTPUT);
  pinMode(FLRR_LegBack, OUTPUT);
  // initialize the pushbutton pin as an input:
  digitalWrite(FRRL_LegForw, LOW);
  digitalWrite(FLRR_LegForw, LOW);
  digitalWrite(FRRL_LegBack, LOW);
  digitalWrite(FLRR_LegBack, LOW);
}

void loop() {
    // turn LED on:
    digitalWrite(0, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(1, LOW);
    digitalWrite(4, LOW);
    delay(5000);
    digitalWrite(0, LOW);
    digitalWrite(3, LOW);
    digitalWrite(1, HIGH);
    digitalWrite(4, HIGH);
    delay(5000);
}
