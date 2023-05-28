#include <Arduino.h>
#line 1 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
// #define C4 262
// #define CS4 277
// #define D4 294
// #define DS4 311
// #define E4 330
// #define F4 349
// #define FS4 370
// #define G4 392
// #define GS4 415
// #define A4 440
// #define AS4 466
// #define B4 494
// #define C5 523
// #define CS5 554
// #define D5 587
// #define DS5 622
// #define E5 659
// #define F5 698
// #define FS5 740
// #define G5 784
// #define GS5 831
// #define A5 880
// #define AS5 932
// #define B5 988
// #define NONE 0

// int tempo = 76;

// int buzzer[] = {11, 10, 9, 8};

// int melody[] = {
//     G4, 4, G4, 4, A4, 3, B4, 1, C5, 4,
//     A4, 4, G4, 3, F4, 1, F4, 4, E4, 4,
//     G4, 3, C5, 1, E5, 4, A4, 3, B4, 1, C5, 4,
//     E4, 4, FS4, 4, G4, 8,

//     G4, 4, G4, 4, A4, 3, B4, 1, C5, 4,
//     A4, 2, A4, 2, G4, 3, F4, 1, F4, 2, F4, 2, E4, 4,
//     G4, 4, E5, 4, D5, 3, C5, 1, B4, 4,
//     B4, 2, B4, 2, A4, 2, A4, 2, G4, 8,

//     G4, 4, G4, 4, A4, 2, G4, 2, G4, 2, G4, 2,
//     G4, 4, A4, 2, B4, 2, C5, 4, C5, 4,
//     NONE, 16,
//     C5, 2, C5, 2, B4, 2, A4, 2, A4, 2, G4, 2, G4, 2,

//     E5, 4, C5, 4, B4, 3, A4, 1, G4, 4,
//     D5, 2, D5, 2, C5, 2, C5, 2, B4, 8,
//     E5, 4, C5, 4, B4, 3, A4, 1, G4, 4,
//     E5, 2, E5, 2, D5, 2, D5, 2, C5, 8,
//     };

// void setup()
// {
//   int size = sizeof(melody) / sizeof(int);
//   for (int thisNote = 0; thisNote < size - 1; thisNote = thisNote + 2)
//   {
//     int noteDuration = 15000 / tempo * melody[thisNote + 1];
//     tone(buzzer[0], melody[thisNote], noteDuration);
//     int pauseBetweenNotes = noteDuration * 1.1;
//     delay(pauseBetweenNotes);
//     noTone(buzzer[0]);
//   }
// }

// void loop()
// {
//   // no need to repeat the melody.
// }

unsigned long time1;
unsigned long time2;
unsigned long timeDifference; // 時間差

#line 75 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
void setup();
#line 80 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
void loop();
#line 75 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Time1: ");
  time1 = millis();
  Serial.print(time1);

  delay(500);

  Serial.print(", Time2: ");
  time2 = millis();
  Serial.print(time2);

  timeDifference = time2 - time1;
  Serial.print(", Time Difference: ");
  Serial.println(timeDifference);

  delay(1000);
}

