// Online C compiler to run C program online
#include <stdio.h>

#define max 30

void main()
{

    int n;    // number of process
    int i, j; // iteratives
    int burst[max], turn[max], wait[max];
    float avgwait = 0, avgturn = 0;
    printf("enter the number of process:");
    scanf("%d", &n);

    printf("enter thei busrt times ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &burst[i]);
    }

    printf("process     burst time     waiting time                turn around time  \n");
    for (i = 0; i < n; i++)
    {
        wait[i] = 0;
        turn[i] = 0;
        for (j = 0; j < i; j++)
        {
            wait[i] = wait[i] + burst[j];
        }
        turn[i] = wait[i] + burst[i];
        avgwait = avgwait + wait[i];
        avgturn = avgturn + turn[i];
        printf("%d\t   | \t%d      | \t\t%d    |\t\t\t%d      |\n", i + 1, burst[i], wait[i], turn[i]);
    }
    avgwait = avgwait / n;
    avgturn = avgturn / n;
    printf("average waiting time :%f ", avgwait);
    printf("average turn around time is :%f", avgturn);
}

// output
/*
enter the number of process:4
enter thei busrt times 3 4 5 6
process |burst time| waiting time|turn around time|
1	  | 	3     | 		0    |			3      |
2	  | 	4     | 		3    |			7      |
3	  | 	5     | 		7    |			12      |
4	  | 	6     | 		12    |			18      |
average waiting time :5.500000 average turn around time is :10.000000*/