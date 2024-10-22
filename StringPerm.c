#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Pre-condition: str is a valid C String, and k is non-negative and
// less than or equal to the length of str.
// Post-condition: All of the permutations of str with the first k
// characters fixed in their original positions are
// printed. Namely, if n is the length of str, then
// (n-k)! permutations are printed.
//when n == k the function should cease calling.
// this should be the first condition checked

char* userInputString(char*);
void swapCharactersAtIndex(char*, char, char);
void recurisvePermute(char*, char*, int, int); 

int main(void) {
    
    char buffer[100];
    userInputString(buffer);
    char* str = (char*)malloc(sizeof(char) * strlen(buffer) + 1);
    char* used = (char*)malloc(sizeof(char) * strlen(buffer) + 1);
    int max = strlen(str);
    
    for(int i = 0; i < max; i++) {
        swapCharactersAtIndex(*str, max, i);
        recursivePermute(*str, used, max, i);
        swapCharactersAtIndex(*str, i, max);
        prinf("%s", *str);
    }
}
char* userInputString(char* str) {
    Printf("Enter a string to permute:\n");
    scanf("%s", str);
}

/*void swapCharacters(char a, char b) {
    char temp;
    temp = a;
    a =  b;
    b = temp;
}*/

void swapCharactersAtIndex(char *str, int a, int b) {
    char temp;
    temp = str[a];
    str[b] = str[a];
    str[b] = temp;
}

void recurisvePermute(char *str, char *used, int k , int n) {
    if ( n == k) {
        printf("%s", str);
    }
    if(str == NULL) {
        return -1;
    }
}      