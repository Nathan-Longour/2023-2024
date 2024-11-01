#include<iostream>
using namespace std;
#include"fibonacci.h"
/*
	R = calcule le n terme de la suite de fibonacie
	E = trois entier deux pour l'initialisation et un pour savoir le terme a calculer
	S = le terme de fibonnaci demandée
*/
float fibo(int a, int b,unsigned int nv)
{
	unsigned int i;
	i = 2;
	float un,unn,u;
	u = a;
	un = b;
	switch (nv)
	{
	case 0 :
		return u;
		break;
	case 1 :
		return un;
		break;
	default:
		while (i != nv)
		{
			unn = un + u;
			u = un;
			un = unn;
			i++;
		}
		return unn;
	}
	
}

/*
	R = verifie que l'entier est bien superieur ou egal a 2
	E = le reel n
	S = le reel n verifiee
*/
int verif()
{
	int n;
	do
	{
		cout << "entrer un reel positif superieur ou egal a 2" << endl;
		cin >> n;
	} while (n<2);
	return n;
}