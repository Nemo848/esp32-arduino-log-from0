int redPin1=32;
int redPin2=33;
int bright1=5;
int bright2=243;

void setup() {
  // put your setup code here, to run once:
pinMode (redPin1, OUTPUT);
pinMode (redPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite (redPin1, bright1);
analogWrite (redPin2, bright2);
}
