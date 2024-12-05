#include <stdio.h>

int main()
{
    int i,n,max;
    printf("enter a number n :");
    scanf("%d", &n);
    int array[n];
   
    // reading the elements from the user
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &array[i]);
    }
    // printing the entered elements
    for (int i = 0; i < n; i++)
    {

        printf("%d  ", array[i]);
    }
    printf("\n");
   // maximum among them;
    max = array[0];
    for (i = 0; i <n; i++)
    { 
        printf("the array[%d]= %d\n", i, array[i]);
        if (array[i] > max)
        {
           
            max = array[i];
            
        }
        printf("the new max value is :%d\n", max);
        }
     printf("the final maximum value is :%d", max);

    return 0;
}
// if something is less than the min value then that value becomes minimum
// in this we consider that our first ellement is the small : and then checked it eith each
// and every element of the array and any of that number is smaller than our first element
// that element = min   so on iteration we can get the samllest element