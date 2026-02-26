#include <stdio.h>

int main() {
    int n, m, i, flag=0; 
    printf("entrez n: \n");
    scanf("%d", &n);

    for (i=0; i<n; i++) {
    printf("entrez m: \n");
    scanf("%d", &m);
        if (m == 6) {
            flag = 1;
        }
    }
    if (flag == 1) {
        printf("le chiffre 6 est present\n");
    } else {
        printf("le chiffre 6 n'est pas present\n");
    }
    return 0;
}            
    
