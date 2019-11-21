void setup()
{
  int seq = 7;
  Serial.begin(9600);
  for(int x = 1; x <= 100; x ++){
    Serial.print("\n");
    Serial.print(seq * x);
  }
}

void loop()
{
}
