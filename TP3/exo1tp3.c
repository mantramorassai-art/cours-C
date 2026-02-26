#include <stdio.h>
#define SUP 100

int main() {
    int tab[SUP]; 
    
    for (int i=2; i<SUP; i++) {
        tab[i] = i ;
    }
    tab[1] = 0;
    tab[0] = 0;    

    for (int i=2; i<SUP; i++) {
        for (int j=2; i*j<SUP; j++) {
            tab[i*j] = 0;
        }
    }
    
    for (int i=0; i<SUP; i++) {
        if (tab[i] != 0) printf("%d ", tab[i]); 
}
    printf("\n");
    return 0;
}    
    
    
