#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isBalanced(char* exp) {
    char c;
    // int n = strlen(exp);
    for (int i = 0; i < strlen(exp); i++) {
        if(c == '(' || c == '{' || c == '[') {
            push(c);
        } else if (c == '(' && pop() != ')' || 
                   c == '{' && pop() != '}' || 
                   c == '[' && pop() != ']') {
            return 0;
            }
    }
    return isEmpty();
}