#include <stdio.h>

int main()
{
    int n, i, j,k;
    printf("enter the array size  n :");
    scanf("%d", &n);
    char array[n];

    // reading the elements from the user
    for ( i = 0; i < n; i++)
    {

        scanf("%c", &array[i]);
        
    }
    // printing the entered elements
    for ( j = 0;j<n; j++)
    {

        printf("%c", array[i]);
    }

    // reverse array is 
    for( k =n-1;k>=0;k--){

        printf("%c",array[i]);
    }

    return 0;
}