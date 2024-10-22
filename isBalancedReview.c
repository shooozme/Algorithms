#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int isBalanced(char *exp) {
    char c;
    for(int i = 0; i < strlen(exp); i++) {
        char c = exp[i];
        if (c == '(' || c == '{' || c == '[') {
            push(c);
        } else if (c == ')' && pop() != '(') {
            return 0;
        } else if (c == '}' && pop() != '{') {
            return 0;
        } else if (c == ']' && pop() != '[') {
            return 0;
        }
    }
    return isEmpty();
}