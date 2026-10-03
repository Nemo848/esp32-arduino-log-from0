int waitT = 1000;
float r = 2;
float area;
float circ;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
area = PI * r * r;
circ = 2 * PI * r;
Serial.print ("A Circle With Radius of ");
Serial.print (r);
Serial.print (" Has an area of ");
Serial.print (area);
Serial.print (" and a Circumference of ");
Serial.println (circ);
r = r + 0.5;
delay (waitT);
}
