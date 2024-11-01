#include"Tableaux.h"

int main()
{
	const unsigned int TAILLE = 5;
	int tab_entiers[TAILLE];
	unsigned int taille_pratique;
	int tabc[TAILLE];
	taille_pratique = Saisie_entiers(TAILLE, tab_entiers);
	Copie_tableaux(tab_entiers, tabc, TAILLE);
	Affiche_entiers(tabc, taille_pratique);
	verif(tab_entiers, tabc, taille_pratique);
	moy(tab_entiers, taille_pratique);
	somme(taille_pratique, tabc);
	Affiche_entiers(tabc, taille_pratique);
	return 0;
}