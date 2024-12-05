#include<stdio.h>
#include<stdlib.h>
#define n 5


int merge(int arr[],int l,int m,int r){

    int i,j,k;

    int n1 = m-l+1; 
    int n2 = r-m;
    int L[n1],R[n2];
    
    for(int i=0;i<n1;i++){
        L[i]=arr[l+i];
    }

    for(int j = 0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    
    
   
    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2){
        if( L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}

int merge_sort(int arr[],int l,int r){
    if (l<r){
        int m = l + (r-l)/2; 
        merge_sort(arr,l,m);   //mergesort on left,mid 
        merge_sort(arr,m+1,r); // mergesort on mid+1 ,right
        merge(arr,l,m,r);   // merge al by taking left,m,r
    }
}

int main() 
{   

	int arr[n];
	for (int i=0;i<n;i++){
		arr[i]=rand()%997;
	}
	
	printf("UnSorted array is \n"); 
	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	// int arr[] = { 12, 11, 13, 5, 6, 7 }; 
	// int arr_size = sizeof(arr) / sizeof(arr[0]); 

// 	printf("Given array is \n"); 
// 	printArray(arr, n); 

	merge_sort(arr, 0, n - 1);  // calling mergsort

	printf("\nSorted array is \n"); 
	for (int i = 0; i < n; i++) 
		printf("%d ", arr[i]); 
	
	
	return 0; 
}