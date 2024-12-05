#include<stdio.h>

int main(){
int n,temp;

printf("enter the size of the array:");
scanf("%d",&n);
int array[n];

for (int i = 0; i < n; i++)
{

    scanf("%d", &array[i]);
}
// printing the entered elements
for (int i = 0; i < n; i++)
{

    printf("%d  ", array[i]);
}

// bubble sorting 

for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){

        if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;

        }
    }
}
for (int i = 0; i < n; i++)
{

    printf("%d  ", array[i]);
}

    return 0;
}
// bubble sort is the way we start from the first element and then iterate over all the elements in the array 
// if first element is greater than the second we swap if ith element is greater than the i+1th element
// then we swap using the temp variable 
// if condition is not met the elements remain same 

