#include <stdio.h>
#include <unistd.h>
  
void  ChildProcess(void);
void  ParentProcess(void);
int n = 0;

int main() 
{ 
    pid_t pid; 
    
    pid = fork();
    if (pid == 0) 
         ChildProcess();
    else 
         ParentProcess();

    return 0; 
} 

void ChildProcess(){
    printf("Hello from child %d \n", getpid() - n);
}

void ParentProcess(){
    printf("Hello from parent %d \n", getpid() - n);
}

//parent process has number one less than the child as it is "older"
//for different program runs parent processes has own IDs for
//the system to distinguish between the processes by their IDs
//in my system these IDs are subsequent, hence probably new ID value
//is an increment of the previous one and they are subsequent as there
//are no new processes are created between the program runs