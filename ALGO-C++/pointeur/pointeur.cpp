#include "pointeur.h"
#include <iostream>
using namespace std;

/*
R: Affiche le contenu d�une zone m�emoire contenant nb cases contig�ues de type
r�eel
E: L�adresse de la zone, le nombre de cases de la zone
E/S: vide
S: vide
*/
void Affiche_reel(const float* p_f, unsigned int nb)
{
	for (unsigned int i = 0; i < nb; i++)
	{
		cout << p_f[i] << endl;
	}
}