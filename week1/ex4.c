#include <stdio.h>

void swap(int *a, int *b){
    const int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    char number[20];
    
    scanf("%s", number);
    sscanf(number, "%d", &a);
    scanf("%s", number);
    sscanf(number, "%d", &b);
    
    swap(&a, &b);
    
    printf("%d %d", a, b);
}
