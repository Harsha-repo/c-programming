#include <stdio.h>

int main()
{
    int n;
    printf("enter a number n :");
    scanf("%d", &n);
    int array[n];

    // reading the elements from the user
    int size=0;
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &array[i]);
        size++;
    }
    // printing the entered elements
    int sum =0;
    
    for (int i = 0; i < n; i++)
    {

        printf("%d", array[i]);
        sum=sum+array[i];
    }
    printf("\n");
    printf("%d",sum);
    printf("size is :%d",size);
printf("the average :%d",sum/size);

    return 0;

}