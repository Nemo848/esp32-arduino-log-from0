int numBlinks;
String msg = "How many blinks do you want:";
int j;
int blinkTime = 500;
int redPin = 23;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(msg);
  while (Serial.available() == 0) {
    // wait for user input
  }
  numBlinks = Serial.parseInt();
  while (Serial.available() > 0) Serial.read();  // clear leftover newline

  Serial.print("You entered: ");
  Serial.println(numBlinks);

  for (j = 1; j <= numBlinks; j = j + 1) {
    digitalWrite(redPin, HIGH);
    delay(blinkTime);
    digitalWrite(redPin, LOW);
    delay(blinkTime);


}
}
