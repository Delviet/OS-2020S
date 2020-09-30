#include <stdlib.h>
#include <stdio.h>

void realloc(void* arr, size_t byte_init, size_t byte_dest)
{
    if (arr == NULL)
    {
        arr = malloc(byte_dest);
    } else {
        if (byte_dest == 0)
        {
            free(arr);
        } else {
            void* arr1 = malloc(byte_source);
            size_t fill = byte_init > byte_dest ? byte_dest : byte_init;
            for (size_t i = 0; i < fill; i++)
            {
                arr1[i] = arr[i];
            }
            arr = arr1;
            free(arr1);
        }
    }
}