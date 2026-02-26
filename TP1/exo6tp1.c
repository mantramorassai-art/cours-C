#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// first part : 
/*int main() {
    srand(time(NULL));
    //printf("%d\n", rand()); 
    //printf("%d\n", rand() % 10); 
    int i; 
    for (i=0; i<10; i++){
        printf("%d ", rand() % 6 + 1);
    }
}*/

// second part : 
/*int main() {
    int i,j; 
    for (i=0; i<10; i++){
        for (j=0; j<10; j++) {
            printf("%d ", rand() % 6 + 1);
        }
        printf("\n");
    }
return 0; 
}*/

// third part: 
int main () {
    int i,j,times_6=0, nb;
        for (i=0; i<10; i++){
            for (j=0; j<10; j++) {
                nb = rand() % 6 + 1;
                printf("%d ", nb);
                if (nb == 6) { 
                    times_6 ++ ;
                }
            }        
        printf("\n");
        }
printf("le nombre de fois que 6 est repeté est %d\n" , times_6);
return 0; 
}







