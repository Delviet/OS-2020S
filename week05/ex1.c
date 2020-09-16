#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define NUM_THREADS	8

void *print(void *threadid)
{
    long taskid;

    taskid = (long) threadid;
    printf("I am thread #%li and I'm going to die!\n", taskid);
    pthread_exit(NULL);
}

//Naive implementation, where different threads compete with each other
//therefore creation of thread #(n+1) doesn't necessarily follows end
//of the thread #n

//
//int main()
//{
//    pthread_t threads[NUM_THREADS];
//    long taskIds[NUM_THREADS];
//    int rc, t;
//
//    for(t=0;t<NUM_THREADS;t++) {
//        taskIds[t] = t;
//        printf("Thread #%i was created, my lord\n", t);
//        rc = pthread_create(&threads[t], NULL, print, (void *) taskIds[t]);
//        if (rc) {
//            printf("ERROR; return code from pthread_create() is %d\n", rc);
//            exit(-1);
//        }
//    }
//
//    pthread_exit(NULL);
//}

//Better implementation, where we wait until previous thread is finished

//int main()
//{
//    pthread_t threads[NUM_THREADS];
//    long taskIds[NUM_THREADS];
//    int rc, t;
//
//    for(t=0;t<NUM_THREADS;t++) {
//        taskIds[t] = t;
//        printf("Thread #%i was created, my lord\n", t);
//        rc = pthread_create(&threads[t], NULL, print, (void *) taskIds[t]);
//        pthread_join(threads[t], NULL);
//        if (rc) {
//            printf("ERROR; return code from pthread_create() is %d\n", rc);
//            exit(-1);
//        }
//    }
//
//    pthread_exit(NULL);
//}
