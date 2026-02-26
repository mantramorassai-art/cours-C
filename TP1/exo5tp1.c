#include <stdio.h>

/* first part
int main() {
    int n, i, res=0;
    scanf("%d", &n); 
    for (i=1; i<=n; i++) {
        res += i*i*i ;
    }
    printf("res = %d\n", res);
    return 0; 
}*/ 

/*second part
int main() {
    int n, m, i, somme = 0;
    printf("entrez n: \n");
    scanf("%d", &n);
    double mean = 0;
    for (i=1; i<=n; i++) {
        printf("entrez m: \n");
        scanf("%d", &m);
        somme += m ;
    }
    mean = somme / n ;
    printf("la somme est %d\n", somme);
    printf("la mean est %f\n", mean);
    return 0;
}*/

/*third part*/
int main() {
    int n, i, facto = 0; 
    scanf("%d", &n);
    for (i=0; i<=n ; i++) {
        if (i == 0) {
            facto = 1;
        } else {
            facto = facto * i;
        }
    }
    printf("la factorielle est %d\n", facto);
    return 0;
}
    
