#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n = 20;
    char string[n];
    char safeword[] = {'s','t','o','p'};

    while (1){
        scanf("%s", string);
        if (!strncmp(string, (const char *) safeword, 4)){
            break;
        }
        system(string);
    }
}