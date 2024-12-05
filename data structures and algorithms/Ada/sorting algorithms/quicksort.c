// 3 . quick sort 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define n 5


int quick_sort(int start,int end,int array[]);
int partition(int start,int end,int array[]);
int swap(int start,int end,int array[]);

int swap(int start,int end,int array[]){
    int temp = array[start];
    array[start] = array[end];
    array[end] = temp;
}

int partition(int start,int end,int array[]){
   int  pivot_index=start;
   int pivot = array[pivot_index];
   

   int i=pivot_index+1;
   int j=end;
    printf("\npivot :%d pivot_index:%d",pivot,pivot_index);
    printf("i==%d  j=%d",i,j);

while(i<=j){

   while ((i<=j) && (array[i]<=pivot))
   i++;

   while (array[j]>pivot )
   j--;
printf("\ni=%d  j = %d",i,j);
   if (i<j)
   swap(i,j,array);
}
   swap(j,pivot_index,array);

printf("\nfixed : %d at %d",array[j],j);
printf("\nupdated array");
 for (int i=0;i<n;i++){
        printf(" %d",array[i]);
    }

return j ;

}

int quick_sort(int start,int end,int array[]){
    if(start<end){
       
        int p_index=partition(start,end,array);
        quick_sort(start,p_index-1,array);
        quick_sort(p_index+1,end,array);
        
    }
}



int main(){


    // printf("enter the number of elements in the array:");
    // scanf("%d",&n);

    // int array[n]={11,9,29,7,2,15,28};
    int array[n];
    for(int i=0;i<n;i++){
        array[i]=rand()%999;
    }

   int len= sizeof(array)/sizeof(array[0]);

    printf("\nThe the given unsorted array array:");
    for(int i=0 ;i<n;i++){
        printf(" %d",array[i]);
    }

   int start = 0;
   int end =n-1;
   printf("\nstart: %d  end :%d",start,end);
   

    quick_sort(start,end,array);

    printf("\nthe elements are :");
    for (int i=0;i<n;i++){
        printf(" %d",array[i]);
    }
    

    return 0;
}

/*QuickSort is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot 
and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.*/

