#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// str == ({[]}) // return 0; 
// str == ((((((((((((())))))))))))) //return 0;
// str == ({)} // return  1;
// str == ({) // return  1;

//using stack! so push();, and pop();
    //when find an opening parenthesis or bracket etc
    //we need to push
    //when we find a closing we need to pop

    //({[ check if )}]
    //pop is returning the top of the stack
    //so it checks if the top of the stack is not equal to the opening parenthesis

int isBalanaced(char *str) {
    char c;
    for(int i = 0; i < strlen(str); i++) {
        c = str[i];
        if (c == '(' || c == '{' || c == '[' ) {
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

int main() {

}