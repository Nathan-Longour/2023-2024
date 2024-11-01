/*
R = demande a un utilisateur de saisir un ensemble d'entier et de saisir et de les memoriser la saisie de -1 pour arrete la saisie et retourne le nombre d'elements saisis
E = 1 entier correspondant a la taille reelle du tableau (maximale)
E/S = 1 tableau d'entiers
S = 1 entier correspondant au nombre d'elements saisis
*/
unsigned int Saisie_entiers(unsigned int tr, int tab[]);

/*
R = affiche les valeurs comprise dans le tableaux d'entrée en fonction de la taille pratique
E = le tableaux a afficher et la taille pratique du tableau
E/S = rien 
S = rien
*/
void Affiche_entiers(const int tab_entiers[], unsigned int taille_pratique);

/*
R = copie un tableaux dans un autre
E = le tableau que l'on veut copier et la taille des tableaux
E/S = le tableaux copier 
S = rien
*/
void Copie_tableaux(const int tabi[], int tabc[], unsigned int taille);

/*
R = verifie si les deux tableaux sont egaux
E = les deux tableaux a comparer et leur taille pratique
E/S = rien
S = rien
*/
void verif(const int tab1[], const int tab2[], unsigned int tp);

/*
R = calcule la moyenne des termes du tableaux en fonction de sa taille pratique
E = le tableaux et sa taille pratique 
E/S = rien 
S = rien
*/
void moy(const int tabm[], unsigned int tpm);

/*
R = remplace les valeurs d'un tableau par sa somme cumulée
E = la taille pratique du tableaux
E/S = le tableaux
S = rien
*/
void somme(unsigned int tps, int tabs[]);