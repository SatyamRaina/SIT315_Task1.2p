int PIR_ok = 8;
bool Cuurent_Stat = false;

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PIR_ok, INPUT);

  attachInterrupt(digitalPinToInterrupt(PIR_ok), swap, CHANGE);
}

void loop()
{
  swap();
  delay(1000);
}

void swap()
{
  Cuurent_Stat = !Cuurent_Stat;
  digitalWrite(LED_BUILTIN, Cuurent_Stat);
  Serial.println("Interrupted");
}
