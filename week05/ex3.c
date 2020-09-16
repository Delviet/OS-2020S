#include <stdio.h>
#include <pthread.h>

#define MAX_VALUE 1000

int prod = 1;
int cons = 0;
int currentValue = 0;

void *producer()
{
    int counter = 0;
    while(1)
    {
        counter++;
        if (prod) {
            if (currentValue == MAX_VALUE) {
                prod = 0;
                continue;
            }

            currentValue++;

            if (currentValue > 0) {
                cons = 1;
            }

            if (counter % 10000 == 0){
                printf("%d\n", counter);
            }

        }
    }
}

void* consumer()
{
    while (1)
    {
        if (cons)
        {
            if (currentValue == 0)
            {
                cons = 0;
                continue;
            }

            currentValue--;

            if (currentValue < MAX_VALUE)
            {
                prod = 1;
            }
        }
    }
}

int main()
{
    pthread_t prodThread, consThread;
//    printf("Hi! I am Chaki and I am your friend till the end.\n");
    pthread_create(&prodThread, NULL, producer, NULL);
    pthread_create(&consThread, NULL, consumer, NULL);
    pthread_join(prodThread,NULL);
    pthread_join(consThread,NULL);
    return 0;
}