int potPin = 33;
int bluePin = 22;
int potVal;
float LEDVal;

void setup() {
  // put your setup code here, to run once:
pinMode (potPin, INPUT);
pinMode (bluePin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal = analogRead (potPin);
LEDVal = (255./4095.)* potVal;
analogWrite (bluePin, LEDVal);
Serial.println(LEDVal);
delay(10);
}
