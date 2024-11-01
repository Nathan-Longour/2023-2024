#define PIN_LED 10 
#define BUTTON 5
unsigned int compt;
int etat;
void setup() 
{
pinMode(PIN_LED,OUTPUT); 
pinMode(BUTTON, INPUT);
compt = 0;
}
void loop() 
{
etat = digitalRead(BUTTON); 
if (compt == 2 && etat == HIGH)
{
  compt = 0;
}
else if(compt< 3 && etat == HIGH)
{
  compt ++;
}

switch(compt) 
{
  case 0 :
    digitalWrite(PIN_LED, HIGH);
    delay(250);
    digitalWrite(PIN_LED, LOW);
    delay (250);
    break;
  case 1 :
    digitalWrite(PIN_LED, HIGH);
    delay(166);
    digitalWrite(PIN_LED, LOW);
    delay (166);
    break;   
  case 2 :
    digitalWrite(PIN_LED, HIGH);
    delay(50);
    digitalWrite(PIN_LED, LOW);
    delay (50);
    break;    
}
}
