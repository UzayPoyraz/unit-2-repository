void setup()
{
	Serial.begin(9600);
    for (int x = 1001; x > 1; x--){
      if (x % 2 != 0){
      	Serial.print("\n");
        Serial.print(x);
      }  
    }
}

void loop(){
  
}
