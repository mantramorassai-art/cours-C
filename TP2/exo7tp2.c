#include <stdio.h>

int main() {
    int n, nb=0, nombre=1; 
    printf("entrez n :\n");
    scanf("%d", &n);

    
    while (n/nombre) {
        printf("nb=%d\n", nb);
        nombre *= 10;
        nb ++;
    }
    printf("le nombre %d a %d nombre de chiffres\n", n, nb);
    return 0;
}
