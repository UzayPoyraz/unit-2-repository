void setup()
{
  int sum=0;
    Serial.begin(9600);
      for(int x = 1; x <= 1000; x ++){
        sum = sum + x;
        Serial.print("\n");
        Serial.print(+sum);
  }
    
    
    
}

void loop()
{
}
