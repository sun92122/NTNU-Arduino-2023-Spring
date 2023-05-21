# 0515筆記_薛皓陽

## Source Code

<https://github.com/sun92122/NTNU-Arduino-2023-Spring/tree/main/0515>

## 視覺暫留

藉由 LED 的閃爍判斷自己視覺暫留的時間（或稱臨界融合頻率）
上課的 24 位同學的數據如下，平均為 12.67 豪秒，標準差為 1.70 豪秒

### HW01_code

```cpp
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(13);
  digitalWrite(LED_BUILTIN, LOW);
  delay(13);
}
```

### 全班同學視覺暫留時間數據（單位：豪秒）

| 第一排 | 第二排 | 第三排 | 第四排 | 第五排 |
| :----: | :----: | :----: | :----: | :----: |
|   X    |   9    |   X    |   X    |   X    |
|   13   |   14   |   X    |   14   |   13   |
|   14   |   11   |   X    |   13   |   X    |
|   X    |   12   |   13   |   13   |   13   |
|   X    |   10   |   11   |   X    |   X    |
|   X    |   9    |   X    |   13   |   X    |
|   X    |   13   |   13   |   12   |   17   |
|   X    |   13   |   X    |   13   |   14   |
|   X    |   14   |   X    |   X    |   X    |

### 全班同學視覺暫留時間數據統計（單位：豪秒）

| 時間  |   9   |  10   |  11   |  12   |  13   |  14   |  15   |  16   |  17   |
| :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: | :---: |
| 人數  |   2   |   1   |   2   |   2   |   11   |   5   |   0   |   0   |   1   |

![全班同學視覺暫留時間數據統計圖](Figure_1.png "全班同學視覺暫留時間數據統計圖" )

$y = 11.43042 \exp(-\dfrac{1}{2}(\dfrac{(x - 13.17844) ^ 2}{0.6381478 ^ 2}))$

---

## 蜂鳴器

將 LED 的輸出改接到蜂鳴器，可以發出不同頻率的聲音
每秒閃爍 100 次的光多數人已經無法分辨，但是每秒跳動數千次的聲音多數人還是可以分辨
即人體各感官的解析度不同

### 小星星_code

<https://github.com/sun92122/NTNU-Arduino-2023-Spring/blob/main/0515/MyTone.ino>

```cpp
#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494
#define BEAT 480

void setup()
{

}

void loop()
{
  noTone(8);

  tone(8, C, BEAT);
  delay(BEAT);
  tone(8, C, BEAT);
  delay(BEAT);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, A, BEAT);
  delay(BEAT);
  tone(8, A, BEAT);
  delay(BEAT);
  tone(8, G, BEAT*2);
  delay(BEAT*2);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, D, BEAT);
  delay(BEAT);
  tone(8, D, BEAT);
  delay(BEAT);
  tone(8, C, BEAT*2);
  delay(BEAT*2);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, D, BEAT*2);
  delay(BEAT*2);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, D, BEAT*2);
  delay(BEAT*2);
  tone(8, C, BEAT);
  delay(BEAT);
  tone(8, C, BEAT);
  delay(BEAT);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, G, BEAT);
  delay(BEAT);
  tone(8, A, BEAT);
  delay(BEAT);
  tone(8, A, BEAT);
  delay(BEAT);
  tone(8, G, BEAT*2);
  delay(BEAT*2);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, F, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, E, BEAT);
  delay(BEAT);
  tone(8, D, BEAT);
  delay(BEAT);
  tone(8, D, BEAT);
  delay(BEAT);
  tone(8, C, BEAT*2);
  delay(BEAT*2);
  delay(BEAT);
  delay(BEAT);
}
```

### Song_code

<https://github.com/sun92122/NTNU-Arduino-2023-Spring/blob/main/0515/NeverGonnaGiveYouUp.ino>

---

## 基本最小（BareMinimum）程式碼

<https://github.com/sun92122/NTNU-Arduino-2023-Spring/blob/main/0515/Mysketch.ino>

```cpp
void setup()
{

}

void loop()
{

}
```
