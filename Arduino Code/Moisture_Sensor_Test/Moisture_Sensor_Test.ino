#define MOISTURE A3

int waterLevel;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(MOISTURE, INPUT);
  waterLevel = 0;
  
}

void loop() {
  // put your main code here, to run repeatedly:
  waterLevel = analogRead(MOISTURE);
  Serial.println(waterLevel);
}
