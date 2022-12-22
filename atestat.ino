int counter = 0;
const int buzzer = D6;
const int red = D0;
const int yell = D1;
const int green = D2;
const int blue = D3;

void setup() {
  pinMode(D4, INPUT_PULLUP);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yell, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(buzzer, OUTPUT);
}
void h1(int red, int yell, int green, int blue) {
  digitalWrite(red, HIGH);
  digitalWrite(yell, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
    tone(buzzer, 1000, 500);
  delay(1000);
  noTone(100);
  digitalWrite(red, LOW);
  digitalWrite(yell, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(100);
}
void h4(int red, int yell, int green, int blue) {
    digitalWrite(red, HIGH);
     delay(500);
   digitalWrite(yell, HIGH);
     delay(500);
   digitalWrite(green,HIGH);
     delay(500);
   digitalWrite(blue,HIGH);
  
   tone(buzzer,1000);delay(500);noTone(buzzer);
  
  digitalWrite(red, LOW);
  digitalWrite(yell, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);
} 
void h2(int red, int yell, int green, int blue) {
  digitalWrite(red, HIGH);
  digitalWrite(yell, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  tone(buzzer,1000,500);
  delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(yell, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  tone(buzzer,500,500);
  delay(1000);
}

void h3(int red, int yell, int green, int blue) {
  digitalWrite(red, HIGH);
  delay(200);
  tone(buzzer,1000);delay(200);
  digitalWrite(red, LOW);
  noTone(buzzer);

  digitalWrite(yell, HIGH);
  delay(100);
    tone(buzzer,800);delay(200);
  digitalWrite(yell, LOW);
    noTone(buzzer);

  digitalWrite(green, HIGH);
  delay(100);
    tone(buzzer,600);delay(200);
  digitalWrite(green, LOW);
    noTone(buzzer);

  digitalWrite(blue, HIGH);
  delay(200);
    tone(buzzer,400);
    delay(200);
    noTone(buzzer);
    delay(200);
    tone(buzzer,400);
    delay(200);
  digitalWrite(blue, LOW);
    noTone(buzzer);

  digitalWrite(green, HIGH);
  delay(100);
    tone(buzzer,600);delay(200);
  digitalWrite(green, LOW);
    noTone(buzzer);

  digitalWrite(yell, HIGH);
  delay(100);
    tone(buzzer,800);delay(200);
  digitalWrite(yell, LOW);
    noTone(buzzer);

}
void loop() {

  if (counter == 0) {
    h1(red, yell, green, blue);
  } else if (counter == 2) {
    h3(red, yell, green, blue);
  } else if (counter == 1) {
    h2(red, yell, green, blue);
  } else if (counter == 3) {
    h4(red, yell, green, blue);
  }
  int buttonReading = digitalRead(D4);
  if (buttonReading == LOW) {
    counter++;
    counter %= 4;
  }
  delay(200);

}
