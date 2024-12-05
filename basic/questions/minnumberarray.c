#include<stdio.h>

int main(){
int n ;
printf("enter a number n :");
scanf("%d",&n);
int array[n];

// reading the elements from the user
for(int i=0;i<n;i++){

    scanf("%d",&array[i]);
}
// printing the entered elements
for (int i = 0; i < n; i++)
{

    printf("%d", array[i]);
}
printf("\n");
//minimum among them;12
int min = array[0];
for(int i = 1 ; i<n;i++){            // since we assumed that the arr[0] is min , then no nees to compare arr[0]
    printf("the array[%d]= %d\n",i,array[i]);
  
    if (array[i]<min){

        min = array[i];
        
 
    }
   
    printf("the new min value is :%d\n", min);
}
printf("the final minimum value is :%d", min);

return 0;
}
// if something is less than the min value then that value becomes minimum
// in this we consider that our first ellement is the small : and then checked it eith each
// and every element of the array and any of that number is smaller than our first element 
// that element = min   so on iteration we can get the samllest element