void setup() {
  Serial.begin(115200);
}

int counter;
void loop() {
  Serial.print("Counter is ");
  Serial.println(counter++);
}
