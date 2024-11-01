char compt;
 
void setup() {
  Serial.begin(9600);
 
}
void loop()
{


   if (Serial.available()>0)
    {
      compt = Serial.read();
      Serial.println(compt);
    }
}

