struct Compte
{
	char nom[21];
	unsigned int numero;
	float solde;
};

/*
R = permet a l'utilisateur de crée un nouveaux compte (nom,numero,solde)
E = rien
S = un nouveaux compte 
*/
Compte Ouvrir_compte();

/*
R = permet a l'utilisateur d'ouvrir et de memoriser un certain nombre de compte 
E = la taille du tableau
S = le nombre de compte saisie
E/S = le tableau contenant tous les comptes
*/
unsigned int Saisir_compte(unsigned int taille, Compte base[]);

/*
R = affiche la somme cumule de chaque compte present dans la base de donnee
E = la taille du tableau, la base de donnée contenant tous les comptes
S = un reel la solde total
*/
float Solde_cumule(const Compte base[], unsigned int tp);