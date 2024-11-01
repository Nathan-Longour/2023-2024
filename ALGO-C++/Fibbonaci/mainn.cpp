#include<iostream>
using namespace std;
#include "fibonacci.h"
int main()
{
	int a, b;
	unsigned int nv;
	cout << "entrer le premier terme pour l initialisation de de fibbo puis le deuxiemme" << endl;
	cin >> a >> b;
	nv = verif();
	cout << "le " << nv << " terme de fibbo est " << fibo(a, b, nv) << endl;
	return 0;
}