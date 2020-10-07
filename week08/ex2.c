#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


int main()
{
    for (int i = 0; i < 10; i++) {
        int* data;
        int bytes = 10 * 1024 * 1024;
        data = (int *) malloc(bytes);
        memset(data, 0, bytes);
        sleep(1);
    }
}

// by some reason, on my laptop swap in and swap out
// values are equal to zero, hence I suppose that
// swaps are not performed