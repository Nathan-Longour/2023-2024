#define e 2
#define d 3
#define c 4
#define b 6
#define a 5
#define f 7
#define g 8
unsigned int compt;
unsigned int temp;

void setup() { 
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  compt = 0;
  Serial.begin(9600);
}

void loop() {
 // put your main code here, to run repeatedly:

if (Serial.available() > 0) {
  compt = Serial.read() - 48;
  
}
 switch(compt)
 {
    case 0 :
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, LOW);
      break;

    case 1 : 
      digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);
      break;

    case 2 :
     digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, LOW);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
     break;

    case 3 :
    digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, HIGH);
     break;

    case 4 :
     digitalWrite(a, LOW);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
     break;

    case 5:
     digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
     break;

    case 6:
    digitalWrite(a, HIGH);
      digitalWrite(b, LOW);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
     break;

   case 7:
     digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, LOW);
      digitalWrite(e, LOW);
      digitalWrite(f, LOW);
      digitalWrite(g, LOW);;
     break;
   case 8 :
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, HIGH);
     digitalWrite(f, HIGH);
     digitalWrite(g, HIGH);
     break;
   
   case 9 :
     digitalWrite(a, HIGH);
     digitalWrite(b, HIGH);
     digitalWrite(c, HIGH);
     digitalWrite(d, HIGH);
     digitalWrite(e, LOW);
     digitalWrite(f, HIGH);
     digitalWrite (g, HIGH);
     break;    
  }
}
