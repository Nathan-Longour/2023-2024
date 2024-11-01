#include "compte_bancaire.h"

#include<iostream>
using namespace std;
int main()
{
	const unsigned int TAILLE = 100;
	Compte Banque[TAILLE];
	Compte titulaire;
	unsigned int tp;
	float solde;
	titulaire = Ouvrir_compte();
	tp = Saisir_compte(TAILLE, Banque);
	solde = Solde_cumule(Banque, tp);
	cout << solde;
	return 0;
}