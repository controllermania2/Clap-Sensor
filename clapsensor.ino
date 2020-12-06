//Mic on off led
int led=13; 
int soundpin=A5;
int threshold=100; // sets threshold for sound sensor
int state=0;      //Initially led state is off
void setup() {
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(soundpin,INPUT);
}
void loop() {  
int soundsens=analogRead(soundpin); // read analog data from sensor
Serial.println(soundsens);
  if (soundsens>=threshold) {
    if(state==0){
    digitalWrite(led, HIGH); // turn led on
state=1;
    delay(100);
  }
  else if(state==1){
    digitalWrite(led, LOW);
  state=0;
delay(100);  
  }}
}
