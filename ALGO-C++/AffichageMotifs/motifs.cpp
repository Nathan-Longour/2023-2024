#include <iostream>
using namespace std;
#include "motifs.h"

/*
	R = affiche un motif sur un certain nombre de ligne
	E = le nombre de ligne n
	S = le motif sur n ligne
*/
void motif(unsigned int n)
{
	unsigned int i = 1;
	unsigned int a;
	unsigned int e = 1;
	unsigned int t = 1;
	while (i <= n)
	{
		a = 1;
		while (a <= n-(i-1))
		{
			cout << " ";
			a++;
		}
		e = 1;
		while (e <= (i*2)-1)
		{
			cout << "*";
			e++;
		}
		cout << endl;
		i++;
	}
	while (t <= n-1)
	{
		cout << " ";
		t++;
	}
	cout << "|_|" << endl;
}