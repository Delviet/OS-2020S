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
    
    for (int i = length - 1; i >= 0 ; i--){
        printf("%c", *(string + i));
    }
    
    return 0;
}
