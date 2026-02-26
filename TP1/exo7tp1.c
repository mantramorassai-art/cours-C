#include <stdio.h>
int main() {
    int n, i;
    printf("entrez n: \n");
    scanf("%d", &n);

    int fn, fn1=1, fn2=1;

    for (i=2; i<= n; i++){
        fn = fn2 + fn1;
        printf("%d ", fn);
        fn2 = fn1;
        fn1 = fn ;
    }
return 0;
}
