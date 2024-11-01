#include<iostream>
using namespace std;
#include"syracuse.h"

int main()
{
	unsigned int r_i, n_i;
	cout << "entrer le nombre de repetition de la suite de syracuse et l'entier de depart"<<endl;
	cin >> r_i >> n_i;
	cout << "le maximum est de " << syra(n_i, r_i) << endl;
	return 0;
}