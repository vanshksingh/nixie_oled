const int buttonPin1 = A1;
const int buttonPin2 = A2;
const int buttonPin3 = A3;

int buttonState1 = LOW;
int lastButtonState1 = LOW;
unsigned long lastDebounceTime1 = 0;

int buttonState2 = LOW;
int lastButtonState2 = LOW;
unsigned long lastDebounceTime2 = 0;

int buttonState3 = LOW;
int lastButtonState3 = LOW;
unsigned long lastDebounceTime3 = 0;

unsigned long debounceDelay = 50;  // debounce time in milliseconds

int counter1 = 0;
int counter2 = 0;
int counter3 = 0;

void setup() {
  pinMode(buttonPin1, INPUT_PULLUP);
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  debounceButton(buttonPin1, buttonState1, lastButtonState1, lastDebounceTime1, counter1);
  debounceButton(buttonPin2, buttonState2, lastButtonState2, lastDebounceTime2, counter2);
  debounceButton(buttonPin3, buttonState3, lastButtonState3, lastDebounceTime3, counter3);
}

void debounceButton(int pin, int &state, int &lastState, unsigned long &lastDebounceTime, int &counter) {
  int readButton = digitalRead(pin);

  if (readButton != lastState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {
    // Update the button state only if it's different from the previous stable state
    if (readButton != state) {
      state = readButton;

      if (state == LOW) {  // Assuming INPUT_PULLUP, the button press is LOW
        counter++;
        if (counter > 3) {
          counter = 1;
        }
        Serial.print("Button ");
        Serial.print(pin);
        Serial.print(" pressed. Counter: ");
        Serial.println(counter);
      }
    }
  }

  lastState = readButton;
}
