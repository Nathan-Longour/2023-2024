#include "Tableaux.h"
#include<iostream>
using namespace std;

/*
R = demande a un utilisateur de saisir un ensemble d'entier et de saisir et de les memoriser la saisie de -1 pour arrete la saisie et retourne le nombre d'elements saisis
E = 1 entier correspondant a la taille reelle du tableau (maximale)
E/S = 1 tableau d'entiers
S = 1 entier correspondant au nombre d'elements saisis
*/
unsigned int Saisie_entiers(unsigned int tr, int tab[])
{
	unsigned int i=0;
	do
	{
		cout << "entrer la valeur a rentrer a la " << i << " eme place et entrer -1 pour arreter" << endl;
		cin >> tab[i];
		i++;
	} while (i<tr && tab[i-1]!=-1);
	if (tab[i-1] == -1)
	{
		i--;
	}
	return i;
}

/*
R = affiche les valeurs comprise dans le tableaux d'entrée en fonction de la taille pratique
E = le tableaux a afficher et la taille pratique du tableau
E/S = rien
S = rien
*/
void Affiche_entiers(const int tab_entiers[], unsigned int taille_pratique)
{
	cout << "{";
	for (unsigned int n = 0; n != taille_pratique; n++)
	{
		cout << tab_entiers[n]<<",";
	}
	cout <<"}" << endl;
}

/*
R = copie un tableaux dans un autre
E = le tableau que l'on veut copier
E/S = le tableaux copier
S = rien
*/
void Copie_tableaux(const int tabi[], int tabc[],unsigned int taille)
{
	for (unsigned int c = 0; c != taille; c++)
	{
		tabc[c] = tabi[c];
	}
}

/*
R = verifie si les deux tableaux sont egaux
E = les deux tableaux a comparer et leur taille pratique
E/S = rien
S = rien
*/
void verif(const int tab1[], const int tab2[], unsigned int tp)
{
	unsigned int veri = 0;
	for (unsigned int v = 0; v != tp ; v++)
	{
		if (tab2[v]==tab1[v])
		{
			veri++;
		}
	}
	if (veri == tp)
	{
		cout << "les deux tableaux sont egaux" << endl;
	}
	else
	{
		cout << "les deux tableaux ne sont pas egaux" << endl;
	}
}

/*
R = calcule la moyenne des termes du tableaux en fonction de sa taille pratique
E = le tableaux et sa taille pratique
E/S = rien
S = rien
*/
void moy(const int tabm[], unsigned int tpm)
{
	float moyenne = 0;
	for (unsigned int m = 0; m != tpm; m++)
	{
		moyenne += tabm[m];
	}
	moyenne = (float)moyenne / tpm;
	cout << "la moyenne du tableau est de " << moyenne << endl;
}

/*
R = remplace les valeurs d'un tableau par sa somme cumulée
E = la taille pratique du tableaux
E/S = le tableaux
S = rien
*/
void somme(unsigned int tps, int tabs[])
{
	unsigned int somme_i = 0;
	for (unsigned int s = 0; s != tps; s++)
	{
		somme_i += tabs[s];
		tabs[s] = somme_i;
	}
}