#include <hidef.h>
#include "derivative.h"
void main(void) {
/*Autorisation des interruptions */
EnableInterrupts;
/* Selection horloge interne `a 8MHz */
ICSC2 = 0x00;
ICSC1 = 0x04;
/* D´esactivation du Watchdog */
SOPT1_COPE=0;
/* Initialisation de TPMSC */
TPMSC=0b01001111;               /*division de la clock par 128*/
/* D´efinition de la valeur max de comptage */
TPMMOD=0xF424;                  /*valeur max pour compter 1 seconde*/

PTBDD=0xFF;

PTBD=0;

PTADD=0;

for(;;) {

} /* loop forever */
}