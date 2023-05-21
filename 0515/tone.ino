#define C 262
#define D 294
#define E 330
#define F 349
#define G 392
#define A 440
#define B 494

void setup()
{

}

void loop()
{
	noTone(8);

	tone(6, 440, 200);
	delay(200);

	tone(6, 494, 500);
	delay(500);

	noTone(7);

	tone(8, C, 300);
	delay(300);
}
