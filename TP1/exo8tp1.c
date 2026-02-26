
#include <stdio.h>

// first part :
/*int main() {
    int n, p;
    printf("Entrez n : ");
    scanf("%d", &n);

    if (n < 2) {
        printf("non premier\n");
        return 0;
    }
    for (p = 2; p <= n - 1; p++) {
        if (n % p == 0) {
            printf("non premier\n");
            return 0;  
        }
    }
    printf("premier\n");
    return 0;
}*/


/* second part :
# include <stdio.h>
int main() {
    int n > 2, p;

    for (p = 1; p <= 100; p++) {
        if (n % p == 0) {
            printf("le chiffre %d est non premier\n", n);
            return 0;  
        } else {
            printf("le chiffre %d est premier\n", n);
        }
    }
    return 0;
}*/

#include <stdio.h>

int main() {
    int n, p;

    printf("Les nombres premiers entre 1 et 100 sont :\n");
    for (n = 2; n <= 100; n++) { // Commencer à 2 car 1 n'est pas un nombre premier
        int isPrime = 1; // Flag pour vérifier si n est premier

        for (p = 2; p * p <= n; p++) { // Vérification jusqu'à la racine carrée de n
            if (n % p == 0) {
                isPrime = 0; // n n'est pas premier
                break; // Sortir de la boucle
            }
        }

        if (isPrime) {
            printf("%d ", n); // Afficher le nombre premier
        }
    }
    printf("\n");
    return 0;
}