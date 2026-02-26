# include <stdio.h>
#include <stdlib.h>
#include <time.h>
# define SUP 8

int main() {
    srand(time(NULL));
    int tab[SUP], temp, index ; 
    
    for (int i=0; i<SUP; i++) {
        tab[i] = i;
    }

    for (int i=0; i<SUP; i++) {    
        index = rand() % (SUP-i);
        printf("%d ", tab[index]);


        temp = tab[index];
        tab[index] = tab[SUP-i-1];
        tab[SUP-i-1] = temp;
    }
    printf("\n");
    return 0; 
}
    

