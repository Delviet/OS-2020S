#include <stdio.h>
#include <string.h>

int main()
{
    int n = 20;
    char string[n];
    char temp;
    
    printf("Enter your string (length <= %d, please):", n);
    scanf("%s", string);
    printf("\n");
    
    int length = strlen(string);
    for (int i = 0; i < length / 2; i++){
        temp = *(string + i);
        *(string + i) = *(string + length - i - 1);
        *(string + length - i - 1) = temp;
    }
    
    puts(string);
    
    return 0;
}
