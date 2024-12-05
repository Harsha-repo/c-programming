// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

// Write C code here
// beacouse th outputs of both the parent and the child process are
// evaluated and printed simulatneously , we are unable to print the  ordered inumbers so we use wait function to make parent process wait untill the child process gets over
int main(int argc, char **argv)
{

    int n;
    int id = fork();

    if (id == 0)
    {
        n = 1;
    }
    else
    {
        n = 6;
    }
    if (id == 0)
    {
        wait();
    }
    // it  says that  if id==0 (parent) then wait untill the execution of the child is done after that parent execution is carried
    for (int i = n; i < n + 5; i++)
    {
        printf("%d ", i);
        fflush(stdout);
    }
    printf("\n");

    return 0;
}
/*
6 7 8 9 10
1 2 3 4 5

guess the out put is n=6 at if and n=1 at else
 */
