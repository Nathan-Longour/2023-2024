#include "pointeur.h"

int main()
{
	float val[5] = { 1.2,2.5,6.5,7.8,8.5 };
	const float* p = val;
	Affiche_reel(p, 5);
	return 0;
}