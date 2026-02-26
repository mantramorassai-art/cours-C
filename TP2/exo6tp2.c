#include <stdio.h> 
#include <time.h>

int main(void) {
    int i; 
    time_t start = time(NULL);
    while (time(NULL) - start < 5) {
        printf("Hello World!");
    }
return 0;
}

