const int button_pin = 2;
const int led_pin = 13;
int button_state = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(button_pin, INPUT);
  pinMode(led_pin, OUTPUT);
  Serial.println("Setup done.");
}

void loop()
{
  Serial.println("Looping...");
  button_state = digitalRead(button_pin);
  Serial.println(button_state);

  // 如果按鈕被按下，就點亮 LED 燈
  if (button_state == HIGH)
  {
    digitalWrite(led_pin, HIGH);
  }
  else
  {
    digitalWrite(led_pin, LOW);
  }
}