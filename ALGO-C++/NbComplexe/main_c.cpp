#include "complexe.h"

#include <iostream>
using namespace std;

int main()
{
	complexe z;
	float modu, argument;
	z = Saisie_complexe();
	cout << "le complexe initiale: " << endl;
	Affich_complexe(z);
	z.im = Conjugue(z);
	cout << "le conjugue du complexe: " << endl;
	Affich_complexe(z);
	z = Opposer(z);
	cout << "l oposer du complexe: " << endl;
	Affich_complexe(z);
	modu = Module(z);
	cout << "le module du complexe est " <<modu << endl;
	z = Inverse(z);
	cout << "l inverse du complexe: " << endl;
	Affich_complexe(z);
	argument = Argument(z);
	cout << "largument du complexe est: "<<argument << endl;
}