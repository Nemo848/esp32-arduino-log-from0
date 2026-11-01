int yellowPin = 23;
int redPin = 22;
int YellowTime = 500;
int RedTime = 500;
int yellowBlink = 2;
int redBlink = 3;
int j; 

void setup() {

pinMode (yellowPin, OUTPUT);
pinMode (redPin, OUTPUT);
Serial.begin (9600);
}

void loop() {
for(j = 1; j<=yellowBlink; j=j+1){
digitalWrite (yellowPin, HIGH);
delay(YellowTime);
digitalWrite (yellowPin, LOW);
delay(YellowTime);
}
for( j = 1; j<=redBlink; j=j+1){
digitalWrite (redPin, HIGH);
delay(RedTime);
digitalWrite (redPin, LOW);
delay(RedTime);
}
