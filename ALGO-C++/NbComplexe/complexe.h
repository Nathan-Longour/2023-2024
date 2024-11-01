struct complexe
{
	float re;
	float im;
};

/*
R = saisi la partie reel et imaginaire du complexe et le retourne
E = rien
S = le complexe
*/
complexe Saisie_complexe(void);

/*
R = affiche le complexe passée en parametre
E = le complexe a afficher
S = rien
*/
void Affich_complexe(complexe z);

/*
R = transforme le complexe pris en entrée en son conjugue
E = le complexe 
S = son conjugue
*/
float Conjugue(complexe z_i);

/*
R = retourne l'opposer du complexe
E = un complexe
S = son opposer
*/
complexe Opposer(complexe z_oi);

/*
R = calcule le module du nombre complexe
E = le nombre complexe 
S = le module du nombre complexe
*/
float Module(complexe z_m);

/*
R = calcule l'inverse du complexe
E = le complexe 
S = son inverse
*/
complexe Inverse(complexe inv);

/*
R = calcule l'argument du nombre complexe
E = le nombre complexe 
S = son argument en radians
*/
float Argument(complexe arg);