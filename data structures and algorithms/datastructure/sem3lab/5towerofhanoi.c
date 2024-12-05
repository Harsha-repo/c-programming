
// b. Solving Tower of Hanoi problem with n disks

// c recursive function to solve tower of hanoi

#include<stdio.h>
#include<stdlib.h>

void towerOfHanoi(int n,char from_rod,char to_rod,char axile_rod){
    if(n==1){
        printf("\n move disk 1 from rod %c  to %c ",from_rod,to_rod);
        return;
    }

    towerOfHanoi(n-1,from_rod,to_rod,axile_rod);
    printf("\n move disk %d from rod %c to %c",n,from_rod,to_rod);
    towerOfHanoi(n-1,axile_rod,to_rod,from_rod);

}

int main(){

    int n=4;
    towerOfHanoi(n,'A','c','B');
    return 0;
}