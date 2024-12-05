// algorithm 

// input : integers 
// output : it is the arrangement of integers inthe sorted array
// technique : we fix a key value and compare with the other in the array if key value is lesser than its previous array value 
// both these positions are swapped 
// that creates a array flow where all the array elements before the key value will always be in sorted 

#include<stdio.h>

int main(){

    int a[]={5,4,3,6,7,8,9};
    int len = sizeof(a)/sizeof(a[0]);
    int key;

    // the loop starts from 2 beacuse we start compare the elements 1 with 2-all other

    int i;
    for(int j=1 ; j<=len ; ++j){
        key = a[j];
        i = j-1;

        while(i>=0 && key<a[i]){   
            a[i+1]=a[i];
            i--;

        }
       
        a[i+1]=key;

    }


    for(int i=0;i<len;i++){

         printf("%d",a[i]);
        
        }


    return 0;
}