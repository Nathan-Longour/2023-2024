#include<iostream>
using namespace std;
#include"syracuse.h"
/*
	R = calcule la suite de syracuse
	E = le premier terme de la suite et le nombre de repetition
	S = le n ieme terme de la suite de syracuse
*/
unsigned int syra(unsigned int n, unsigned int r)
{
	unsigned int i = 1,min = r,max=n;
	unsigned int u= n;
	unsigned int ui = n;
	unsigned int stop = 5;
	
	while (i != r)
	{
		if (u == 1)
		{
			if (min == r)
			{
				min = i-1;
			}
		}
		if (u>ui)
		{
			max = u;
			ui = u;
		}
		if (u % 2 == 0)
		{
			u = u / 2;
			cout << "etape " << i << " un = " << u << endl;
			i++;
			stop++;
		}
		else
		{
			u = 3 * u + 1;
			cout << "etape " << i << " un = " << u << endl;
			i++;
			stop++;
		}
		if (u == 4)
		{
			stop = 1;
		}
		if (stop == 3)
		{
			cout << "min = " << min << endl;
			return max;
		}
	}
	
	cout << "max = " << max << endl;
}