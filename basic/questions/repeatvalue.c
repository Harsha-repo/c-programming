#include <stdio.h>

int main()
{
    int n,i,j;
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

        printf("%d", array[i]);
    }
    printf("\n");
    // reapeatation elements read
    printf("the repeated values are:");
int reapeat;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(array[i]==array[j]){
                printf("%d  ", array[i]);
            }
            
          
        }
        
    }
    // printf("%d", c);
    return 0;
}