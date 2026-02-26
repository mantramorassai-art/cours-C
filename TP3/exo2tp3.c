#include <stdio.h> 
#define SIZE 256

int main() {
    char chaine[SIZE] = "abcdefghijklmnopqrstuvwxyz!?";
    printf("entrez une chaine de charactère :\n"); 
    scanf(" %[^\n]", chaine);
    // scanf("%s", chaine); #pas besoin de emttre & pour chaine car un tableau est un address

    for (int i=0; chaine[i] != '\0'; i++) {
        // printf("%c ", chaine[i]); %c => affiche chaque charactère d'une chaine 

        if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = 'a' + (chaine[i] - 'a' + 13) %26;
        }
    // printf("%c|%d\n", chaine[i], chaine[i]); 
    }
    printf("%s\n", chaine);
    return 0;
}
