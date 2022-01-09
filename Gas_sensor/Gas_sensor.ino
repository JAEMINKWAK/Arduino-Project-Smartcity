int redLed = 12;
int greenLed = 11;
int buzzer = 10;
int smokeA0 = A5;
int sensorThres = 200;

void Task1_Runner() {
  int analogSensor = analogRead(smokeA0);

  Serial.print("Pin A0: ");
  Serial.println(analogSensor);
if (analogSensor > sensorThres) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    tone(buzzer, 1000, 200); }
  else {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    noTone(buzzer); }
  delay(100); }
  void Task2_Runner() {
  if (digitalRead(8) == HIGH) {
    digitalWrite(2, HIGH); } 
  else  {
    digitalWrite(2, LOW); }
  delay(10); }

void setup() {
  pinMode(8, INPUT);
  pinMode(2, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(smokeA0, INPUT);
  Serial.begin(9600); }

void loop() 
{
  Task1_Runner();
  Task2_Runner(); 
  }
