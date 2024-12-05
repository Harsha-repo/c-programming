// 1 . selection sort
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    int n;
    clock_t tstart = clock();
    printf("enter the elements in an array\n");
    scanf("%d",&n);
    int a[n];
   
    int temp;
    for(int i=0;i<n;i++)
    {
        a[i] = rand()%999;
    }
    for(int i=0;i<n;i++){

        int min = a[i];

    for(int j=i+1;j<n;j++){
        if (a[j]<min){
            min=a[j];

            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
                 

        }
    }
    }
    for(int i=0;i<n;i++){
        printf(" %d",a[i]);
    }
        printf("\n");
        clock_t tend = clock();
        printf("%lf sec\n",(double)(tend-tstart)/(double) CLOCKS_PER_SEC);
    
    
    return 0;
}
// min value based sorting
// selction sort is a kind of sorting in which the algorithm fixes a min value 
// each iteration is runned over the loop it checks the other min value present in the 
//fallowed if smaller element is found then it swaps with the cuurent position and 
// jumps to next element assuming it as a min value 
// followed iterations going to sort the elements in the ascending order as the mininmum elements are getting picked
//o/p is sorted array