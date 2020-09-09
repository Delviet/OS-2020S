#include <unistd.h>

int main()
{
    for (int i = 0; i < 5; i++){
        fork();
    }
    sleep(5);
}

//after each fork() call, number of processes increases in 2 times
//after the first loop call, number of processes = 1 * 2 = 2,
//after second, equals 2 * 2 = 4, third: 4 * 2 = 8.
//so, there are 8 processes after 3 loop calls
//if there are 5 loop calls, then number of the processes increases
//in 4 times, hence there are 8 * 4 = 32 processes