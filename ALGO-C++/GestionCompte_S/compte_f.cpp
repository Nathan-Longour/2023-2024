#include <iostream>
using namespace std;

#include "compte_bancaire.h"

/*
R = permet a l'utilisateur de crée un nouveaux compte (nom,numero,solde)
E = rien
S = un nouveaux compte
*/
Compte Ouvrir_compte()
{
	Compte titulaire;
	cout << "entrer un nom pour le nouveaux compte, puis le numero du compte et la solde sur le compte" << endl;
	cin >> titulaire.nom >> titulaire.numero >> titulaire.solde;
	return titulaire;
}

/*
R = permet a l'utilisateur d'ouvrir et de memoriser un certain nombre de compte
E = la taille du tableau
S = le nombre de compte saisie
E/S = le tableau contenant tous les comptes
*/
unsigned int Saisir_compte(unsigned int taille, Compte base[])
{
	unsigned int ti = 0;
	char arret ='o';
	do
	{
		base[ti] = Ouvrir_compte();
		cout << "entrer 'o' pour continuer la saisie" << endl;
		cin >> arret;
		ti++;
	} while (ti < taille && arret == 'o');                   
	return ti;
}

/*
R = affiche la somme cumule de chaque compte present dans la base de donnee
E = la taille du tableau, la base de donnée contenant tous les comptes
S = un reel la solde total
*/
float Solde_cumule(const Compte base[], unsigned int tp)
{
	unsigned int tpi = 0;
	float solde = 0;
	while (tpi< tp)
	{
		solde = base[tpi].solde + solde;
	}
	return solde;
}
