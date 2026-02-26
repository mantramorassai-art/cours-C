#include <stdio.h>

/* first part: 
int main () {
    int n, sum = 0; 
    printf("entrez n:\n");
    scanf("%d", &n);

    while (n!=0) {
        sum += n;
        printf("entrez un autre n:\n");
        scanf("%d", &n) ;
    }
printf("la somme de tt les n qui sont passer dans le terminal sont : %d\n", sum);
return 0; 
}*/

/*second part : 
int main () {
    int n, sum = 0, produit = 1; 
    printf("entrez n:\n");
    scanf("%d", &n);

    while (n!=0) {
        sum += n;
        produit *= n ;
        printf("entrez un autre n:\n");
        scanf("%d", &n) ;
    }
printf("la somme de tt les n qui sont passés dans le terminal sont : %d\n", sum);
printf("le produit te tt les n qui sont passés dans le terminal sont : %d\n", produit);
return 0; 
} */

/*third part : */
int main () {
    int n, sum = 0, produit = 1, nonnull=0 ; 
    double mean = 0; 
    printf("entrez n:\n");
    scanf("%d", &n);

    while (n!=0) {
        sum += n;
        produit *= n ;
        nonnull +=1 ; 
        mean = sum / nonnull; 
        printf("entrez un autre n:\n");
        scanf("%d", &n) ;
    }
printf("la somme de tt les n qui sont passés dans le terminal sont : %d\n", sum);
printf("le produit de tt les n qui sont passés dans le terminal sont : %d\n", produit);
printf("la moyenne de tt les n qui sont passés dans le terminal sont : %.2f\n", mean);
printf("le nb non null de n qui sont passés dans le terminal sont : %d\n", nonnull);
return 0; 
}

/* comment faire avec do-while ?? */