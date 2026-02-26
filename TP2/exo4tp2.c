#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int s, n, try=0;  


    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));
    s = rand() % 100 + 1; // Nombre aléatoire entre 1 et 100 inclus
    printf("Devinez le nombre (entre 1 et 100) :\n");

    while (n != s) {
        printf("Entrez votre essai : ");
        scanf("%d", &n);
        try += 1; // Incrémente le nombre d'essais

        if (n < s) {
            printf("trop petit!");
        } else if (n > s) {
            printf("trop grand!"); 
        }
    }
printf("Gagné\n");
printf("le nombre d'eesaye = %d\n", try);
return 0; 
}