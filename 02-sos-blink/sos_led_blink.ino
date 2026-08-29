int blueLEDpin = 15; //2
float pi = 3.14;
int fastBlink = 200;
int slowBlink = 600;

void setup() {
  // put your setup code here, to run once:
pinMode (15, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (blueLEDpin, HIGH); 
delay(fastBlink);
digitalWrite (blueLEDpin, LOW);
delay(fastBlink);

digitalWrite (blueLEDpin, HIGH);
delay(fastBlink);
digitalWrite (blueLEDpin, LOW);
delay(fastBlink);

digitalWrite (blueLEDpin, HIGH);
delay(fastBlink);
digitalWrite (blueLEDpin, LOW);
delay(fastBlink);

digitalWrite (blueLEDpin, HIGH); 
delay(slowBlink);
digitalWrite (blueLEDpin, LOW);
delay(slowBlink);

digitalWrite (blueLEDpin, HIGH);
delay(slowBlink);
digitalWrite (blueLEDpin, LOW);
delay(slowBlink);

digitalWrite (blueLEDpin, HIGH);
delay(slowBlink);
digitalWrite (blueLEDpin, LOW);
delay(slowBlink);

digitalWrite (blueLEDpin, HIGH); 
delay(fastBlink);
digitalWrite (blueLEDpin, LOW);
delay(fastBlink);

digitalWrite (blueLEDpin, HIGH);
delay(fastBlink);
digitalWrite (blueLEDpin, LOW);
delay(fastBlink);

digitalWrite (blueLEDpin, HIGH);
delay(fastBlink);
digitalWrite (blueLEDpin, LOW);
delay(fastBlink);

delay(1000);

}
