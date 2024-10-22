#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX 5;

int queue[MAX];
int front = -1;
int rear = -1;

enqueue(int x) {
    if (rear == MAX-1) {
        printf("OVERFLOW");
        return -1;
    } else if (front == -1 && rear == -1) {
        //First we determine if both are undefined, if so we need to set them to zero(the first index)
        //, and actually begin using them within the array
        front = 0;
        rear = 0;
        queue[rear] = x;
    } else {
        //Since both are not undefined we may increase them by one effectively moving the end of the line back
        //by adding to rear, and then set the variable equal to that index!
        rear++;
        queue[rear] = x;
    }
}

dequeue() {
    if ( rear == -1 )
}


int main() {
    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peek();
    dequeue();
    peek();
    display();

}
