#define capt_G A5
#define capt_D A4 
#define sens_mot_1 2
#define sens_mot_2 4
#define PWM_mot_1 3
#define PWM_mot_2 5
unsigned int vitesse;
unsigned int pos_G;
unsigned int pos_D;
void setup() {
  // put your setup code here, to run once:
  pinMode(sens_mot_1,OUTPUT);
  pinMode(sens_mot_2,OUTPUT); 
  digitalWrite(sens_mot_1, LOW);
  digitalWrite(sens_mot_2, HIGH);
  vitesse = 255;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(capt_G) && analogRead(capt_D) >= 800)
  {
    if (pos_G >= 800)
    {
      digitalWrite(sens_mot_1, LOW);
      digitalWrite(sens_mot_2, LOW);
      analogWrite(PWM_mot_1,vitesse);
      analogWrite(PWM_mot_2,vitesse);
    }
    if (pos_D >= 800)
    {
      digitalWrite(sens_mot_1, HIGH);
      digitalWrite(sens_mot_2, HIGH);
      analogWrite(PWM_mot_1,vitesse);
      analogWrite(PWM_mot_2,vitesse);      
    }
    }
  
  if (analogRead(capt_G) && analogRead(capt_D) <= 250)
  {
    digitalWrite(sens_mot_1, LOW);
    digitalWrite(sens_mot_2, HIGH);
    analogWrite(PWM_mot_1,vitesse);
    analogWrite(PWM_mot_2,vitesse);
    pos_G = analogRead(capt_G);
    pos_D = analogRead(capt_D);
  }
  if (analogRead(capt_G)>= 800 && analogRead(capt_D) <= 250 )
  {
    digitalWrite(sens_mot_1, LOW);
    digitalWrite(sens_mot_2, LOW);
    analogWrite(PWM_mot_1,vitesse);
    analogWrite(PWM_mot_2,vitesse);
    pos_G = analogRead(capt_G);
    pos_D = analogRead(capt_D);
    
  } 
   if (analogRead(capt_D)>= 800 && analogRead(capt_G) <= 250 )
  {
    digitalWrite(sens_mot_1, HIGH);
    digitalWrite(sens_mot_2, HIGH);
    analogWrite(PWM_mot_1,vitesse);
    analogWrite(PWM_mot_2,vitesse);
    pos_G = analogRead(capt_G);
    pos_D = analogRead(capt_D);
  } 
  
}
