#include "nomprenom.h"
#include<iostream>
using namespace std;

/*
R = genere un tableau de caractere contenant les 3 premiere letres d'un prenom
E = le tableau contenant le nom est le prenom
E/S = le tableaux repondant a la consigne
S = vide
*/
void NomPrenom(char tabf[],const char prenom[], const char nom[])
{
	for (unsigned int i = 0; i != 3; i++)
	{
		tabf[i] = prenom[i];
	}
	tabf[3] = '-';
	for (unsigned int i = 0; i != 3; i++)
	{
		tabf[i+4] = nom[i];
	}
}

/*
R = represente les contenant dune liste
E = la table a representer
E/S = rien
S = rien
*/
void affich(const char taba[])
{
	for (unsigned int i = 0; i <= 6; i++)
	{
		cout << taba[i];
	}

}