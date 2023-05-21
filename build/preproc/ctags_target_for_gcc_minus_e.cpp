# 1 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
# 27 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
int tempo = 76;

int buzzer[] = {11, 10, 9, 8};

int melody[] = {
    392, 4, 392, 4, 440, 3, 494, 1, 523, 4,
    440, 4, 392, 3, 349, 1, 349, 4, 330, 4,
    392, 3, 523, 1, 659, 4, 440, 3, 494, 1, 523, 4,
    330, 4, 370, 4, 392, 8,

    392, 4, 392, 4, 440, 3, 494, 1, 523, 4,
    440, 2, 440, 2, 392, 3, 349, 1, 349, 2, 349, 2, 330, 4,
    392, 4, 659, 4, 587, 3, 523, 1, 494, 4,
    494, 2, 494, 2, 440, 2, 440, 2, 392, 8,

    392, 4, 392, 4, 440, 2, 392, 2, 392, 2, 392, 2,
    392, 4, 440, 2, 494, 2, 523, 4, 523, 4,
    0, 16,
    523, 2, 523, 2, 494, 2, 440, 2, 440, 2, 392, 2, 392, 2,

    659, 4, 523, 4, 494, 3, 440, 1, 392, 4,
    587, 2, 587, 2, 523, 2, 523, 2, 494, 8,
    659, 4, 523, 4, 494, 3, 440, 1, 392, 4,
    659, 2, 659, 2, 587, 2, 587, 2, 523, 8,
    };

void setup()
{
  int size = sizeof(melody) / sizeof(int);
  for (int thisNote = 0; thisNote < size - 1; thisNote = thisNote + 2)
  {
    int noteDuration = 15000 / tempo * melody[thisNote + 1];
    tone(buzzer[0], melody[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * 1.1;
    delay(pauseBetweenNotes);
    noTone(buzzer[0]);
  }
}

void loop()
{
  // no need to repeat the melody.
}
