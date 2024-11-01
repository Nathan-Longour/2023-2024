#include "fonction_al.h"
#include <iostream>
using namespace std;


int main()
{
	unsigned int stock, i = 0, a =0;
	cout << "enter le nombre de reels a stockers" << endl;
	cin >> stock;
	float* point = new float[stock];
	while (i< stock)
	{
		cout << "entrer une valeur a stocker" << endl;
		cin >> point[i];
		i++;
	}
	for (unsigned int a = 0; a < stock; a++)
	{
		cout <<endl<< point[a] << endl;
	}
	delete[] point;
	cout << "enter le nombre de reels a stockers" << endl;
	cin >> stock;
	point = Zone(stock);

}