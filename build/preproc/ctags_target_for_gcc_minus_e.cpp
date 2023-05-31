# 1 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
// // 宣告區
// // 常數不變
// const int buttonPin = 2; // 按鈕開關訊號插孔為 2 號
// const int ledPin = 13;   // LED 插孔為 2 號
// // 變數會改變
// int buttonState = 0;         // 開關訊號狀態初值為零
// int randomTime;              // 亂數時間
// unsigned long time1;         // 時間 1(紅燈亮時)
// unsigned long time2;         // 時間 2(啟動剎車時)
// unsigned long reactionTime;  // 反應時間
// void setup()                 // 設定區
// {                            // 設定區開頭
//   pinMode(ledPin, OUTPUT);   // 設定 ledPin 為 OUTPUT
//   pinMode(buttonPin, INPUT); // 設定 buttonPin 為 INPUT
//   Serial.begin(9600);        // 設定序列埠監視幕
//   // 隨機點亮 LED
//   Serial.println("When the RED light is on, press the BRAKE"); // 印紅燈警語
//   randomTime = random(1000, 10000);                            // 擷取亂數時間
//   delay(randomTime);                                           // 延遲亂數時間
//   digitalWrite(ledPin, HIGH);                                  // 向 ledPin 輸出 HIGH(點亮 LED)
//   time1 = millis();                                            // 擷取亮燈時間存於 time1
//   Serial.print("Time1: ");                                     // 印字 Time1:
//   Serial.println(time1);                                       // 印變數 time1 之值
// } // 設定區結'
// void loop()                             // 迴圈區
// {                                       // 迴圈區開頭
//   buttonState = digitalRead(buttonPin); // 讀取 buttonPin 狀態存於 buttonState
//   // 起初為 LOW, 按下開關, buttonState 變為 HIGH:
//   if (buttonState == HIGH)                     // 如果 buttonState 等於 HIGH(按下)
//   {                                            // 如果執行區開頭
//     Serial.print("buttonState = ");            // 印字
//     Serial.println(buttonState);               // 印變數 buttonState 之值
//     Serial.print("Time2: ");                   // 印字
//     time2 = millis();                          // 擷取剎車時間存於 time2
//     Serial.println(time2);                     // 印變數 time2 之值
//     reactionTime = time2 - time1;              // 計算時間差存入 reactionTime
//     Serial.println("Button has been pressed"); // //印字 開關已按
//     Serial.print("Your reaction time = ");     // 印字
//     Serial.print(reactionTime);                // 印變數 reactionTime 之值
//     Serial.println(" ms");                     // 印字
//     digitalWrite(ledPin, LOW);                 // 向 ledPin 輸出 LOW(LED 暗)
//     delay(100000);                             // 延遲 10 分鐘 (任務完成，等待下次啟動)
//   }                                            // 如果執行區結尾
// } // 迴圈區結

// // #include <LiquidCrystal_I2C.h>

// // LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

// // void setup()
// // {
// //   lcd.begin(16, 2);

// //   lcd.print("Hello, world!");
// // }

// // void loop()
// // {
// //   lcd.noBlink();

// //   delay(3000);

// //   lcd.blink();
// //   delay(3000);
// // }
# 92 "D:\\GitHub\\NTNU-Arduino-2023-Spring\\test\\test.ino"
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
