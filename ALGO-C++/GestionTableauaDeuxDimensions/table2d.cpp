#include"table2d.h"

#include<iostream>
#include<iomanip>
using namespace std;
/*
R = permuter deux lignes d'un tableaux d'entiers
E = 1 entiers correspondant au nombre pratique de colonnes
E/S = le tableaux dont on veut permuter les lignes 1 tableau de tableau de 6 entiers
*/
void Permute_lignes(unsigned int tab_i[][6], unsigned int tp_c, unsigned int l_1, unsigned int l_2)
{
	unsigned int nb_t;
	for (unsigned int c = 0; c != tp_c; c++)
	{
		nb_t = tab_i[l_1-1][c];
		tab_i[l_1-1][c] = tab_i[l_2-1][c];
		tab_i[l_2-1][c] = nb_t;
	}
}


/*
R = permuter deux collones d'un tableaux d'entiers
E = les indices des deux collones a permuter la taille pratique de ligne
E/S = le tableau dont on veut permuter les collonnes 1 tableau de tableaux de 6 entiers
S = rien
*/
void Permute_collonnes(unsigned int tab_c[][6], unsigned int tp_l, unsigned int c_1, unsigned int c_2)
{
	unsigned int nb_c;
	for (unsigned int l = 0; l != tp_l; l++)
	{
		nb_c = tab_c[l][c_1-1];
		tab_c[l][c_1 - 1] = tab_c[l][c_2 - 1];
		tab_c[l][c_2 - 1] = nb_c;
	}
}

/*
R = affiche le un tableau de tableau dans un style
E = le tableau a afficher le nombre de collonnes et de lignes
E/S = rien
S = rien
*/
void Affiche_tab_tab(const unsigned int tab_a[][6], unsigned int c_a, unsigned int l_a)
{
	unsigned int l = 0, c = 0;
	while (l != l_a)
	{
		cout << "| ";
		while (c != c_a)
		{
			cout << setw(2)<<setfill('0') << tab_a[l][c] << " ";
			c++;
		}
		c = 0;
		cout << "|" << endl;
		l++;
	}
	cout << endl;
}