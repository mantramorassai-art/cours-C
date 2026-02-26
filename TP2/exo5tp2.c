#include <stdio.h>

int main() {
    int p=1,  g=101, m, answer, counter;
    
    do {
        m = (p + g) / 2; 
        printf("la reponse est elle %d?\n", m);
        scanf("%d", &answer); 

        if (answer == -1) {
            p = m + 1;
        } else if (answer == 1) {
            g = m; 
        } if (p == g) {
            printf("Vous avez fait une erreur!\n"); 
            return 1;
        }
    } while (answer != 0); 
        printf("j'ai trouvé en %d iteration ! \n", counter);
        return 0; 
}


/*    printf("choisissez un nombre entre 1 et 100\n");

     
    while (1) {
        m=(p + g)/2 ;
        printf("Est ce que c'est bien ce chiffre %d ? \n", m);
        scanf("%d", answer); /*il donne à answer un entier
        if (answer == 0) {
            printf("le nombre trouvé est %d", answer);
            return 0;
        } else if (answer == -1) {
            printf("le nombre trouvé est %d", answer);
            p = m+1 ;
        } else if ( p == g*g) {
            printf("ERROR: p = g*2");
            break ;
        } else {
            g = m ;
        }
    }
return 0; 
}*/  
            
    
