#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAXSIZE 50


void enQueue(int *queue_array, int rear, int add_item) {
    if (rear < MAXSIZE) {
        queue_array[rear] = add_item;
        rear++;
        printf("Inserted");
    }
}

int* deQueue(int *queue_array, int front, int rear) {
    if (front == rear) {
        printf("Empty");
        return -9999;
    }
    else {
        return queue_array[front++];
    }
}

void display(int *queue_array, int front, int rear) {
    int i;
    if (front == rear) {
        printf("Queue is empty");
    } else {
        printf("\nQueue is :\n");
        for (i = front; i < rear; i++) {
            printf("%d", queue_array[i]);
            printf("\n\n");
        }
    }
}
/*isEmpty() {

}   

isFull() {

}

Peek() {

}*/

int main() {
    int queue_array[MAXSIZE];
    int rear = 0;
    int front = 0;

    for(int i = 0; i < 6; i++) {
         enQueue(queue_array, rear, i);
    }
    
    display(queue_array, front, rear);
}