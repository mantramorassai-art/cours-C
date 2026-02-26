# include <stdio.h>
# Define t 26

//les fonctions:
int char_in (char c, char *t, int n);
int partial_display (char *s, char *t, int n);

// Exercice 1 : Pendu 
// 1. 
int char_in (char c, char *t, int n) { 
    for(int i=0; i<n; i++) {
        if (t[i] == c){
            return 1;
        }
    }
    return 0;
    }
    
// 2.
int partial_display (char *s, char *t, int n) { 
    for(
