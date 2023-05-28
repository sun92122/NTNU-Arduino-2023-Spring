int push_button = 2;
int button_state = 0;

void setup() {
  // 初始化序列埠
  Serial.begin(9600);
  // 初始化 push_button 為輸入腳位
  pinMode(push_button, INPUT);
}

void loop() {
  // 讀取 push_button 的狀態
  button_state = digitalRead(push_button);

  Serial.println(button_state); // 印出 button_state 的值，並換行

}
