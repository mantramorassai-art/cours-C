#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NBR 10
#define hi 3

// les fonctions: 
void print_array(int *t, int taille);
void read_array(int *t, int taille);
void rand_array(int *t, int taille, int min, int max);
void sorted_rand_array(int *t, int taille, int min, int step);
int linear_search(int *t, int taille, int v);
int is_sorted(int *t, int taille);
int max_post(int *t, int taille); 
int binary_search(int *t, int taille, int v);

// Exercice 1: Préliminaires
void  print_array(int *t, int taille) {

    for (int i=0; i<taille; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}

void read_array(int *t, int taille) {
    int i; 
    
    for(i=0; i<taille; i++) {
        printf("Entrez la valeur souhaiter: \n"); 
        scanf("%d", &t[i]);
    }
    printf("\n");
}

void rand_array(int *t, int taille, int min, int max) {
    int i; 
    for (i=0; i<taille; i++) {
        t[i] = rand()%(max-min)+min;
    }
}

void sorted_rand_array(int *t, int taille, int min, int step) {
    int i, gap; 
    t[0] = min;
    for (i=1; i< taille; i++) {
        gap = rand()%(step+1);
        t[i] = t[i-1] + gap;
    } 
    
    printf("\n");
}
    


// Exercice 2 : Recherche linéaire 
int linear_search(int *t, int taille, int v) {
    for (int i=0; i<taille; i++) {
        if (t[i] == v) {
            return i ;
        }
    }
    return -1 ;
}

/*int main() {
    int tab[NBR] = {1,2,3,4,5,6,7,8,9,10}, LS = 0;
    LS = linear_search(tab, NBR, 5); 
    printf("%d\n", LS);
    
    return 0;
}*/

// Exercice 3 : Test de tri 
int is_sorted(int *t, int taille) {
    for (int i=0; i<(taille-1); i++) {
        if (t[i+1] < t[i]) {
            return 0; 
        }
     } 
    return 1; 
}

/*int main() { 
    int tab[hi] = {1,2,3}, yo=0; 
    yo = is_sorted(tab, hi);
    printf("%d\n", yo);

    return 0; 
}*/

// Exercice 4 : Max 
int max_post(int *t, int taille) {
    int max=t[0], index=0;    
    for (int i=1; i<taille; i++) {
        if (t[i] > max) {
            max = t[i];
            index = i ; 
        }
    }
    printf("%d", index);
    printf("\n");
    return 0;
}

/*int main() {
    int tab[hi] = {1,5,3}; 
    max_post(tab, hi); 

    return 0; 
}*/

// Exercice 5 : Recherche par dichotomie 
int binary_search(int *t, int taille, int v){ 
    int p=0, g=taille, m; 
    while (p != g) {
        m = (p+g)/2 ;
        if (t[m] == v){
            return m;
        } else if (t[m] < v) {
            p = m + 1;
        } else {
            g = m ; 
        }
    }
    return -1;
}

int main () {
    int tab[NBR];
    //read_array (tab, NBR);
    rand_array (tab, NBR, 5, 10); 
    sorted_rand_array (tab, NBR, 5, 10);
    print_array (tab, NBR);
    printf("\n");

    print_array (tab, NBR);
    printf("Index de %d est %d\n",5,linear_search(tab, NBR, 5));
    printf("\n");

    print_array (tab, NBR);
    printf("Tableau trié : %d\n",is_sorted(tab, NBR));
    max_post(tab, NBR);
    printf("\n");

//  rand_array (tab, NBR, 5, 10);
//  print_array (tab, NBR);
//  printf("Tableau trié : %d\n", is_sorted(tab, NBR));
//  max_post(tab, NBR);
    
    sorted_rand_array (tab, NBR, 5, 10);
    print_array (tab, NBR);
    printf("Index de 68 = %d\n", binary_search(tab, NBR, 48));
    printf("Index de 68 = %d\n", binary_search(tab, NBR, 28));
    printf("Index de 68 = %d\n", binary_search(tab, NBR, 68));
    printf("Index de 80 = %d\n", binary_search(tab, NBR, 80));
    return 0; 
}



        





















// Exercice 6 : Tri par selection 
