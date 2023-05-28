unsigned long time1;
unsigned long time2;
unsigned long timeDifference; // 時間差

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
