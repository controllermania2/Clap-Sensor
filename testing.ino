int soundpin=A5;
void setup() {
Serial.begin(9600);
pinMode(soundpin,INPUT);
}
void loop() {
int soundsens=analogRead(soundpin); // read analog data from sensor
Serial.println(soundsens);
delay(50);
}
