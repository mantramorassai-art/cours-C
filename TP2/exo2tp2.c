#include <stdio.h>

/* first part 
int main() {
    int m, vol=0;
    printf("entrez m\n");
    scanf("%d", &m); 

    while (m != 1) { 
        if (m % 2 == 0) {
            m = m /2 ;
        } else {
            m = 3 * m + 1 ;
        }
        printf("%d ", m);
        vol++;
    }

    printf("\nle temps de vol = %d\n", vol);
    return 0; 
}*/

/* second part */
int main() {
    int m=100, vol=0, i; 
    
    for (i=1; i< 101; i++) {
        m = i; 
        vol = 0;
        while (m != 1) {  
            if (m % 2 == 0) {
                m = m /2 ;
            } else {
                m = 3 * m + 1 ;
            }
            vol++;
        }
        printf("le temps de vol de %d est de %d \n", i, vol);

    }

   return 0; 
}









