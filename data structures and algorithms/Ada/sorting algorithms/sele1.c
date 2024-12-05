#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main(){

    clock_t tstart = clock();
    int i,j,n,temp,min,mj;
    printf("enter the elements in an array");
    scanf("%d",&n);
    int a[n];
    printf("\n");
   
    for(i=0;i<n;i++)
    {
        a[i] = rand()%999;
    }
    for(i=0;i<n;i++)
    {
        min = a[i];
        mj = i;
    
    for(j=i+1;j<n;j++){
        if (a[j]<min)
        {
            min=a[j];
            mj=j;
        
        }
    }
            temp=a[i];
            a[i]=a[mj];
            a[mj]=temp;
                 
    }
    printf("\n sorted array is");
    for(i=0;i<n;i++)
    {
        printf(" %d\t",a[i]);
    }
        printf("\n");
        clock_t tend = clock();
        printf("%lf sec\n",(double)(tend-tstart)/(double) CLOCKS_PER_SEC);
    
    
    return 0;
}

// to get the time for different size of input we use Clock() function to begin and end the time and also plot 
// graph between input size and time taken
