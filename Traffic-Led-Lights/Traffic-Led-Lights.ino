int LEDs [] = {2, 3, 4};
int Buzzer = 5;

void setup ()
{
  for (int i=0; i<3; i++)
  {
    pinMode (LEDs[i], OUTPUT);
  }
  pinMode (Buzzer, OUTPUT);
}

void loop ()
{
  for (int i=0; i<3; i++)
  {
    digitalWrite (LEDs[i], HIGH);
    if (i == 2)
    {
      tone (Buzzer, 200); 
      delay (600);
      noTone (Buzzer); 
    }
    delay (3000);
    digitalWrite (LEDs[i], LOW);
  }
}
