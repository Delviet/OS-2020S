#include <stdio.h>
#include <string.h>

void printVal(int aster, char val){
    for (int i = 0; i < aster; i++){
        putchar(val);
    }
}

void createPyramid(int n){
    for (int row = 0; row < n; row++){
        printVal(n - row, ' ');
        printVal(1 + 2*row, '*');
        printVal(n - row, ' ');
        printf("\n");
    }
}

int main()
{
    int n;
    char number[20];
    scanf("%s", number);
    sscanf(number, "%d", &n);
    createPyramid(n);
    return 0;
}
