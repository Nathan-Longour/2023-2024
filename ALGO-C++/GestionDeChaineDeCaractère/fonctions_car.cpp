#include"fonctions_car.h"

/*
R = calcul la longeur d'une chaine de charactere et la retourne
E = la chaine de charactere
S = un entier
*/
unsigned int Longueur_chaine(const char* car)
{
	unsigned int i = 0 , compteur = 0;
	while (car[i] != '\0')
	{
		compteur++;
		i++;
	}
	return compteur;
}

/*
R = concatene les deux chaine de charactere en une seule
E = les deux chaine de charactere a concatene
S = la chaine de charactere concatene
*/
char* Concatene_nouvelle(const char* ch_1, const char* ch_2)
{
	unsigned int m = 0, n = 0;
	unsigned int a = 0;
	a = Longueur_chaine(ch_1);
	a += Longueur_chaine(ch_2);
	char* ch_f = new char[a];
	while (ch_1[m] != '\0')
	{
		ch_f[m] = ch_1[m];
		m++;
	}
	while (ch_2[n] != '\0')
	{
		ch_f[m] = ch_2[n];
		m++;
		n++;
	}
	return ch_f;
}