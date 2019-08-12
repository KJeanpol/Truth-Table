const int bytes = 3;
const int inputs[bytes] = {5, 6, 7};
byte counter = 0;

void setup() {
  for (int i = 0; i < bytes; i++) {
    pinMode(inputs[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < bytes; i++) {
    digitalWrite(inputs[i], bitRead(counter, i));
  }  
  counter++;
  delay(2000);
}
