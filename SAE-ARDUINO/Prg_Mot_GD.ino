#define sens_mot_1 2
#define sens_mot_2 4
#define PWM_mot_1 3
#define PWM_mot_2 5
unsigned int compt=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sens_mot_1,OUTPUT);
  pinMode(sens_mot_2,OUTPUT); 
  digitalWrite(sens_mot_1, HIGH);
  digitalWrite(sens_mot_2, LOW);
}

void Com_Mot_Gauche(int vitesse);

void Com_Mot_Gauche( int vitesse)
{
  if ( vitesse >= 0)
  {
    digitalWrite(sens_mot_2, LOW);
    analogWrite(PWM_mot_2,vitesse);
  }
  else
  {
    digitalWrite(sens_mot_2, HIGH);
    analogWrite(PWM_mot_2,abs (vitesse));
  }
  
}


void Com_Mot_Droit(int vitesse);

void Com_Mot_Droit( int vitesse)
{
  if ( vitesse >= 0)
  {
    digitalWrite(sens_mot_1, HIGH);
    analogWrite(PWM_mot_1,vitesse);
  }
  else
  {
    digitalWrite(sens_mot_1, LOW);
    analogWrite(PWM_mot_1,abs (vitesse));
  }
  
}


void loop() {
  // put your main code here, to run repeatedly:
  while (compt <=255)
  {
    Com_Mot_Droit(compt);
    Com_Mot_Gauche(abs(compt-1));
    compt++; 
    delay(16);  
  }
  while (compt > 0)
  {
    Com_Mot_Droit(compt);
    Com_Mot_Gauche(abs(compt-1));
    compt--; 
    delay(16);  
  }   
  delay(2000);  
  while (compt <=255)
  {
    Com_Mot_Droit(-compt);
    Com_Mot_Gauche(-compt);
    compt++; 
    delay(16);  
  }
  while (compt > 0)
  {
    Com_Mot_Droit(-compt);
    Com_Mot_Gauche(-compt);
    compt--; 
    delay(16);  
  } 
  delay(2000);

}
