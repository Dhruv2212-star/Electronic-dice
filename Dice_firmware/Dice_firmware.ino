
const uint8_t ledPins[6] = {
  PA0, PA1, PA2, PA3, PA4, PA5
};

const uint8_t buttonPin = PA6;

void showCount(uint8_t count) {
 
  for (uint8_t i = 0; i < 6; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  
  uint8_t order[6] = {0, 1, 2, 3, 4, 5};

  for (int8_t i = 5; i > 0; i--) {
    uint8_t j = random(i + 1);

    uint8_t temp = order[i];
    order[i] = order[j];
    order[j] = temp;
  }

  for (uint8_t i = 0; i < count; i++) {
    digitalWrite(ledPins[order[i]], HIGH);
  }
}

void setup() {
  for (uint8_t i = 0; i < 6; i++) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }

  pinMode(buttonPin, INPUT_PULLUP);

 
  randomSeed(analogRead(A7));
}

void loop() {
 
  if (digitalRead(buttonPin) == LOW) {

   
    delay(25);

    if (digitalRead(buttonPin) == LOW) {

      
      unsigned long startTime = millis();

      while (millis() - startTime < 2000UL) {
        uint8_t rollingCount = random(1, 7);
        showCount(rollingCount);

        delay(80);
      }

      
      uint8_t result = random(1, 7);
      showCount(result);

      
      while (digitalRead(buttonPin) == LOW) {
        delay(5);
      }

      
      delay(30);
    }
  }
}
