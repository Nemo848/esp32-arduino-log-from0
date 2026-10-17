int myVoltPin = 36;
int readVal;
float V2;
int waitTime = 275;
int  redPin = 22;


void setup() {
Serial.begin (9600);
pinMode (myVoltPin, INPUT);
pinMode (redPin, OUTPUT);

}

void loop() {
readVal = analogRead (myVoltPin);
V2 = (5./4095.) * readVal;
Serial.println (V2);
if (V2>3.0) digitalWrite(redPin, HIGH);
else digitalWrite(redPin, LOW);
delay(waitTime);
}
