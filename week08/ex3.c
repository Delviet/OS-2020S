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

// the only thing which I managed to notice is that
// virtual and real RAM usage is approximately the same
// for the given program