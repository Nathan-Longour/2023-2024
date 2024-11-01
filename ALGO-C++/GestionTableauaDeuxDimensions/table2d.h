/*
R = permuter deux lignes d'un tableaux d'entiers
E = 1 entiers correspondant au nombre pratique de colonnes 2 entiers les ieme et jieme lignes a permuter
E/S = le tableaux dont on veut permuter les lignes 1 tableau de tableau de 6 entiers
S = rien
*/
void Permute_lignes(unsigned int tab_i[][6], unsigned int tp_c, unsigned int l_1, unsigned int l_2);


/*
R = permuter deux collones d'un tableaux d'entiers
E = les indices des deux collones a permuter la taille pratique de ligne 
E/S = le tableau dont on veut permuter les collonnes 1 tableau de tableaux de 6 entiers
S = rien
*/
void Permute_collonnes(unsigned int tab_c[][6], unsigned int tp_l, unsigned int c_1, unsigned int c_2);

/*
R = affiche le un tableau de tableau dans un style
E = le tableau a afficher le nombre de collonnes et de lignes 
E/S = rien
S = rien
*/
void Affiche_tab_tab(const unsigned int tab_a[][6], unsigned int c_a, unsigned int l_a);