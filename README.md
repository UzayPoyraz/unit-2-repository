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
### Counting from 10 to 15 in Binary
When we write in Decimals, after we reach 9, we add 1 to the begining and add 0. In binary it is the same. It starts with 0, 1 and the number that comes after is 10. When we come to this point we start adding 1's, so the next number is 11. Then again we reached the 1 limit so we have to add 0's and start again, thus, the next numbers are 100, 101, 110, 111, 1000. So in the scope of this, 15 is going to be 1111. In order to count in Binary with LED lights, we need 4 LED lights. I set up 4 lights that will work independentaly. I coded the LEDs with the help of modules. I set up a for loop from 1 to 15 and under that I devided every light in 4 section A,B,C,D respectively. For the D section I got module 2 and if it's greater than 0 it will light up. For C I got module 4 and if it's greater than 1, it will light up. For the B section, I got module 8 so if the number is greater than 3 it will light up. And finally I got module 16 on A section so it will light up if it's greater than 8.
![](15binary.png)
