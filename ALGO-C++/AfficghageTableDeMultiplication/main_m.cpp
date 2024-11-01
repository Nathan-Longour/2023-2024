#include<iostream>
using namespace std;
#include"table_m.h"

int main()
{
	unsigned int n;
	cout << "entrer le nombre d'entier de la table de multiplication" << endl;
	cin >> n;
	table_m(n);
	return 0;
}