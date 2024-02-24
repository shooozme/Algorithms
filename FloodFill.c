#include <stdio.h>
#define SIZE 10
void floodFill(char[][SIZE], int, int, char);
void floodFillRecursive (char[][SIZE], int, int, char, char);
void displayGrid( char[][SIZE], int, int);

int main (void) {
    char grid[SIZE][SIZE] = {
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
    {'*', '*', ' ' , ' ', '*', '*', '*',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', '*', '*', ' ',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', ' ', '*', ' ',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', ' ', '*', ' ',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', ' ', ' ', ' ',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', ' ', ' ', ' ',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', ' ', '*', ' ',' ', ' ', '*'},
    {'*', ' ', ' ' , ' ', ' ', '*', ' ',' ', ' ', '*'},
    {'*', '*', '*', '*', '*', '*', '*', '*', '*', '*'}
    };
    printf("Before flood fill\n");
    //fillGridWithGarbage(grid, SIZE, SIZE);
    displayGrid(grid ,SIZE ,SIZE);
    printf("\nAfter flood fill\n");
    floodFill(grid, 3, 3, '~');
    displayGrid(grid ,SIZE ,SIZE);
    //errrrm what the bean
}

void floodFill(char grid[][SIZE], int x, int y, char ch) {
    char oldChar = grid[x][y];
    floodFillRecursive(grid, x, y, ch, oldChar);
}

void floodFillRecursive (char grid[][SIZE], int x, int y, char newChar, char oldChar) {
    if (x < 0 || y < 0 || x >= SIZE || y >= SIZE) {
        return;
    }
    if (grid[x][y] != oldChar){
        return;
    }
    //pffft forgot this line
    grid[x][y] = newChar;
    floodFillRecursive(grid, x-1, y, newChar, oldChar);
    floodFillRecursive(grid, x+1, y, newChar, oldChar);
    floodFillRecursive(grid, x, y-1, newChar, oldChar);
    floodFillRecursive(grid, x, y+1, newChar, oldChar); 
}

void displayGrid( char grid[][SIZE], int row, int column) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("%c", grid[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    
}
