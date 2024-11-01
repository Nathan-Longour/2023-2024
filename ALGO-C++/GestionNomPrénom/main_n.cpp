#include"nomprenom.h"
#include<iostream>
using namespace std;

int main()
{
	char tab[8],prenom[100], nom[100];
	cout << "entrer son prenom et son nom " << endl;
	cin >> prenom >> nom;
	NomPrenom(tab, prenom, nom);
	affich(tab);
	return 0;

}