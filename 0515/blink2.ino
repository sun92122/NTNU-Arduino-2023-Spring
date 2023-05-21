#define delay(x) delayMicroseconds(x)

const unsigned long DIGITAL_DELAY = 500;

void setup()
{
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
	digitalWrite(LED_BUILTIN, HIGH);
	delay(DIGITAL_DELAY);
	digitalWrite(LED_BUILTIN, LOW);
	delay(DIGITAL_DELAY);
}
