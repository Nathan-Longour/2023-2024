#include"fonctions.h"


/*
R = inverse le contenue de deux variables passée en parametre
E = les deux variable a inverse
S = un pointeur
*/
void inv(float* a, float* b)
{
	float temp = *a;
	*a = *b;
	*b = temp;
}