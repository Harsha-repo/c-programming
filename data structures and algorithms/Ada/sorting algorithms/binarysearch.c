// binary search work based on dividing the array into two parts on the mid 
//element if checks mid is the target element , if yes then traget found , else compare
// the element with the mid element and see whether the target < or > thann the mid element 
// iif lesser move towards left of array , if greater then move towards right of array 
// time complexity is (logn)


#include <stdio.h>

int main(){
    
    int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12};

    int target = 11;
    int size = sizeof(a)/sizeof(a[0]);
   
    printf("size of array : %d\n",size);
    

    int left =0;
    int right = size;
    int mid;
   
        int i=0;
        while(left<=right){
        mid=(left+right)/2;
        printf("\nmid : %d",mid);
        if(target==a[mid]){
            printf("\nfound at %d element = %d on iteration =%d",mid , a[mid],i);
            break;

        }

        else if(target<a[mid]){
            right=mid-1;
            
        }

        else if(target>a[mid]){
            left = mid+1;
        }

        i++;
    }


    // for(int i=0;i<size;i++){
    //     printf("%d",a[i]);
    // }
    
    return 0;
}