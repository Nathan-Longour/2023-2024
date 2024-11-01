#include<iostream>
using namespace std;

#include "table2d.h"

int main()
{
	unsigned int tab[4][6] = { {02,03,05,07,11,13},{17,19,23,29,31,37},{41,43,47,53,59,61},{67,71,73,79,83,89} };
	cout << "tableau de base" << endl;
	Affiche_tab_tab(tab, 6, 4);
	Permute_lignes(tab, 6, 1, 3);
	cout << "tableau avec les lignes permutee" << endl;
	Affiche_tab_tab(tab, 6, 4);
	Permute_collonnes(tab, 4, 2, 5);
	cout << "tableau avec les collonnes permutee" << endl;
	Affiche_tab_tab(tab, 6, 4);
}