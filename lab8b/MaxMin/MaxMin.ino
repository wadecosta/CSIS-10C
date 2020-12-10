

const int sensorPin = 0; 
const int numReadings = 16; 

void setup() {
  Serial.begin(9600);
  Serial.setTimeout(-1);
  analogReference(DEFAULT);
}

void getLight(int data[], int len) {
  for (int i=0; i<len; i++) {
    data[i] = analogRead(sensorPin);
    delay(100);
  }
}

void loop() {
  int readings[numReadings]; 
  getLight(readings, numReadings);

  // Print readings and compute average here

  delay(5000);
}
