#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char buffer[5];
    setvbuf(stdout, buffer, _IOLBF, 5);
    printf("H");
    sleep(1);
    printf("e");
    sleep(1);
    printf("l");
    sleep(1);
    printf("l");
    sleep(1);
    printf("o\n");
    sleep(1);
}