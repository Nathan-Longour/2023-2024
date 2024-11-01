#define PIN_LED1 3
#define PIN_LED2 5
#define PIN_LED3 6
#define PIN_LED4 9

void setup() {
  pinMode(PIN_LED1,OUTPUT);
  pinMode(PIN_LED2,OUTPUT);
  pinMode(PIN_LED3,OUTPUT);
  pinMode(PIN_LED4,OUTPUT);
}

void loop() {
  delay(500);
  digitalWrite(PIN_LED4, HIGH);
  digitalWrite(PIN_LED1, LOW);
  delay(500);
  digitalWrite(PIN_LED1, HIGH);
  digitalWrite(PIN_LED2, LOW);
  delay(500);
  digitalWrite(PIN_LED2, HIGH);
  digitalWrite(PIN_LED3, LOW);
  delay(500);
  digitalWrite(PIN_LED3, HIGH);
  digitalWrite(PIN_LED4, LOW);
}
