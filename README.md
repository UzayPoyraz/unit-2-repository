# unit-2-repository
This is for Unit 2

## Development

### Using for loops in Arduino

```.c
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  for(int x=11; x>=9; x --){
  	digitalWrite(x, HIGH);
  	delay(1000); // Wait for 1000 millisecond(s)
  	digitalWrite(x, LOW);
  	delay(1000); // Wait for 1000 millisecond(s)
  }
}
```
