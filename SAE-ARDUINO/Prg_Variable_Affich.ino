int compt1;
unsigned long temps_1=0;
unsigned long temps_b
char compt;
 
void setup() {
  compt1 =0;
  Serial.begin(9600);
 
}
void loop()
{
temps_b = millis();
if(temps_b – temps_a >= 300)
{
  temps_a = temps_b;
  Serial.println(compt1);
  compt1+=1;
 
   if (Serial.available()>0)
    {
      compt = Serial.read();
      Serial.println(compt);
      }
}
}
