#include "complexe.h"

#include <iostream>
#include <math.h>
using namespace std;

/*
R = saisi la partie reel et imaginaire du complexe et le retourne
E = rien
S = le complexe
*/
complexe Saisie_complexe(void)
{
	complexe comp;
	cout << "entrer la partie reel puis la partie imaginaire d'un complexe" << endl;
	cin >> comp.re >> comp.im;
	return comp;
}

/*
R = affiche le complexe passée en parametre
E = le complexe a afficher
S = rien
*/
void Affich_complexe(complexe z)
{
	cout << z.re << " " << z.im << endl;
}

/*
R = transforme le complexe pris en entrée en son conjugue
E = le complexe
S = son conjugue
*/
float Conjugue(complexe z_i)
{
	complexe z;
	z.im = -(z_i.im);
	return z.im;
}

/*
R = retourne l'opposer du complexe
E = un complexe
S = son opposer
*/
complexe Opposer(complexe z_oi)
{
	complexe z_o;
	z_o.im = -(z_oi.im);
	z_o.re = -(z_oi.re);
	return z_o;
}

/*
R = calcule le module du nombre complexe
E = le nombre complexe
S = le module du nombre complexe
*/
float Module(complexe z_m)
{
	float mod;
	mod = sqrt(pow(z_m.im, 2) + pow(z_m.re, 2));
	return mod;
}

/*
R = calcule l'inverse du complexe
E = le complexe
S = son inverse
*/
complexe Inverse(complexe inv)
{
	complexe z_i;
	z_i.re = inv.re / pow(Module(inv), 2);
	z_i.im = -inv.im / pow(Module(inv), 2);
	return z_i;
}

/*
R = calcule l'argument du nombre complexe
E = le nombre complexe
S = son argument en radians
*/
float Argument(complexe arg)
{
	float argu;
	if (arg.re == 0)
	{
		if (arg.im > 0)
		{
			argu = 3.14 / 2;
		}
		else
		{
			if (arg.im < 0)
			{
				argu = -3.14 / 2;
			}
		}
	}
	else
	{
		if (arg.re > 0)
		{
			argu = atan(arg.im / arg.re);
		}
		else
		{
			argu = atan(arg.im / arg.re)+3.14;
			if (argu > 3.14)
			{
				argu = argu - 2 * 3.14;
			}
		}
	}
	return argu;
}