#include<iostream>
#include<iomanip>
#include"table_m.h"
using namespace std;
unsigned int i=1,n=1;
/*
	R = affiche la table de multiplication des n entier
	E = n le nombre de repetetion
	S = la table de multiplation
*/
void table_m(unsigned int n_i)
{
	cout << "  ";
	for (unsigned int b = 1; b != 11; b++)
	{
		cout << setw((log(pow(n_i, 2))/log(10))+1) << setfill(' ') << b;
	}
	while (i<= n_i)
	{
		cout <<endl<< setw((log(pow(n_i, 2)) / log(10))) << setfill(' ') << i;
		while (n<= 10)
		{
			cout << setw((log(pow(n_i, 2)) / log(10)) + 1) << setfill(' ') << i * n;
			n++;
		}
		n = 1;
		i++;
	}
}