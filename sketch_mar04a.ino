int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int buttonPinA = 2;
int buttonPinB = 4;
int on;
void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(buttonPinA, INPUT_PULLUP);
  pinMode(buttonPinB, INPUT_PULLUP);
  randomSeed(analogRead(A0));
}

void loop() 
{
  if (digitalRead(buttonPinA) == LOW)
    on = 1;
  if (digitalRead(buttonPinB) == LOW)
    on = 0;
  if (on == 1)
  {
    int value = random(0,256);
    analogWrite(redPin, value);
    value = random(0,256);
    analogWrite(greenPin, value);
    value = random(0,256);
    analogWrite(bluePin, value);
  }
  if (on == 0)
  {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, HIGH);
  }
}
