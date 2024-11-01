#include"fonctions_car.h"
#include <iostream>
using namespace std;


int main() 
{
	/*unsigned int nb_c, taille;
	cout << "Quel est le nombre maximal de caracteres a saisir?";
	cin >> nb_c;
	char* p_str = new char[nb_c + 1];
	cout << "Saisir votre chaine:";
	cin >> p_str;
	taille = Longueur_chaine(p_str);
	cout << "la taille est de " << taille << endl;
	delete[] p_str;
	*/

	const char* ch_1;
	const char* ch_2 = "bonjour";
	char* ch_f = nullptr;
	unsigned int a;
	a = Longueur_chaine(ch_1) + Longueur_chaine(ch_2);
	ch_f = Concatene_nouvelle(ch_1, ch_2);
	for (unsigned int i = 0; i < a; i++)
	{
		cout << ch_f[i];
	}
	return 0;
}