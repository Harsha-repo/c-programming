// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

// Write C code here

int main(int argc, char **argv)
{

    pid_t pid;
    pid = fork();
    printf("helllo \n");

    fork();
    if (pid == 0)
    {
        printf("the process is a child process and pid is :%d\n", getpid());
        exit(0);
    }

    else if (pid > 0)
    {

        printf("the process is parent process and pid is :%d\n", getpid());
        exit(0);
    }

    else
    {
        printf("error while forking");
        exit(EXIT_FAILURE);
    }
    return 0;
}

//out put:
/*
helllo
helllo
the process is parent process and pid is :47589
the process is a child process and pid is :47590
the process is a child process and pid is :47591*/