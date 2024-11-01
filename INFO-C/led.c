#include"derivative.h"
#include"variable.h"
void interrupt 7 Depassement_compteur(void){
/*On interrompt le processeur pour faire quelque chose*/
/*Ce quelque chose se traduit par des instructions `a
traiter pendant l’interruption qu’il faut positionner ici*/
//Attention `a bien remettre `a 0 le bit TOF apr`es avoir trait´e les instructions de l’interruption

TPMSC=TPMSC & 0b01111111;

if (PTAD_PTAD2 && !PTBD_PTBD4) {         
  PTBD=PTBD | masque_gauche;
  masque_gauche = masque_gauche >> 1; 
  
  
}
if (PTAD_PTAD3 && !PTBD_PTBD3) {       
  PTBD=PTBD|masque_droite;
  masque_droite = masque_droite << 1 ;  
}

}//fin de l’interruption