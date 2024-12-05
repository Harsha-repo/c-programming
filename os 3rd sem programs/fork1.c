// if we need three times a process to be executed
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

// Write C code here
// if we create n fork()'s that will lead to 2**n processes further 
int main(int argc, char **argv)
{

    int id = fork();
    printf("%d\n", id);
    if (id == 0)
        fork();
    printf("helllo \n");

    return 0;
}
//output
/*
20266
0
helllo
helllo
helllo */

// for parent the processs id is =0 
// for child process the id is >0 