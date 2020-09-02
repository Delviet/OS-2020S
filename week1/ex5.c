#include <stdio.h>
#include <string.h>

void printVal(int aster, char val){
    for (int i = 0; i < aster; i++){
        putchar(val);
    }
}

void drawLine(int size, int line, int mode){
    switch(mode){
        case 1:
            printVal(size - line, ' ');
            printVal(1 + 2*line, '*');
            printVal(size - line, ' ');
            break;
        case 2:
            printVal(line + 1,'*');
            break;
        case 3:
            printVal((line < size/2.0) ? 1+line:size-line,'*');
            break;
        case 4:
            printVal(size, '*');
            break;
    }
    printf("\n");
}

void createDrawing(int size, int mode){
    for (int i = 0; i < size; i++){
        drawLine(size, i, mode);
    }
}

int main()
{
    int mode;
    int n;
    char number[20];
    
    printf("Possible modes of drawing:\n");
    printf("1. triangle;\n");
    printf("2. eight triangle;\n");
    printf("3. left triangle;\n");
    printf("4. square.\n");
    printf("Enter the mode, please: ");
    scanf("%s", number);
    printf("\n");
    sscanf(number, "%d", &mode);
    
    if ((mode < 1) || (mode > 4)){
        printf("Wrong mode was given!");
        return 0;
    }
    
    printf("Enter the size, please: ");
    scanf("%s", number);
    printf("\n");
    sscanf(number, "%d", &n);
    
    if (n < 1){
        printf("Wrong size was given!");
        return 0;
    }
    
    createDrawing(n, mode);
    
    return 0;
}
