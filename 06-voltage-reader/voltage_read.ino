int myVoltPin = 35;
int readVal;
float V2;
int waitTime = 500;


void setup() {
Serial.begin (9600);

}

void loop() {
readVal = analogRead (myVoltPin);
V2 = (5./4095.) * readVal;
Serial.println (V2);
delay (waitTime);

}
