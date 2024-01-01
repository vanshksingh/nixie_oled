const int incrementButtonPin = 32; 
const int decrementButtonPin = 33;
const int resetButtonPin = 34;

int counter = 0;

void setup() {
  pinMode(incrementButtonPin, INPUT_PULLDOWN);
  pinMode(decrementButtonPin, INPUT_PULLDOWN);
  pinMode(resetButtonPin, INPUT_PULLDOWN);
  Serial.begin(115200);
}

void loop() {
  if (digitalRead(incrementButtonPin) == HIGH) {
    counter++;
    printCounter();
    delay(300); // Simple debounce
  }
  if (digitalRead(decrementButtonPin) == HIGH) {
    counter--;
    printCounter();
    delay(300); // Simple debounce
  }
  if (digitalRead(resetButtonPin) == HIGH) {
    counter = 0;
    printCounter();
    delay(300); // Simple debounce
  }



}

void printCounter() {
  Serial.print("Counter value: ");
  Serial.println(counter);
}
