#include<stdio.h>
#include<sys/types.h> //for fork()
#include<unistd.h>  //for getpid() getppid()

void main()
{
    pid_t pid;
    pid = fork();
    if(pid == 0)
    {
        printf("Child:Child process ID from child=%d\n",getpid());
        printf("Child:Parent process ID from child=%d\n",getppid());
    }
    else
    {
        printf("Parent:Parent ID from parent=%d\n",getpid());
        printf("Parent:Process ID from parent=%d\n",getppid());
        printf("Child from parent=%d\n",pid);
    }
}
