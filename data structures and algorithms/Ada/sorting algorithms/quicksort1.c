// 3 quick sort
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
 
while(i<=j){

   while ((i<=j) && (array[i]<=pivot))
   i++;

   while (array[j]>pivot )
   j--;

   if (i<j)
   swap(i,j,array);
}
   swap(j,pivot_index,array);


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

    int array[n];
    for(int i=0;i<n;i++){
        array[i]=rand()%999;
    }

   int len= sizeof(array)/sizeof(array[0]);

    printf("\nThe the given unsorted array array:");
    for(int i=0 ;i<len;i++){
        printf(" %d",array[i]);
    }

   int start = 0;
   int end =len-1;
    printf("\nstart: %d  end :%d",start,end);
   

    quick_sort(start,end,array);

    printf("\nthe elements are :");
    for (int i=0;i<len;i++){
        printf(" %d",array[i]);
    }
    

    return 0;
}

