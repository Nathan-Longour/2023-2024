#include"fonctions.h"
#include <iostream>
using namespace std;

int main()
{
	float a = 2.8, b = -5.6;
	cout << "avant echange : a= " << a << " et b= " << b << endl;
	inv(&a, &b);
	cout << "apres echange : a= " << a << "et b = " << b << endl;
	return 0;
}