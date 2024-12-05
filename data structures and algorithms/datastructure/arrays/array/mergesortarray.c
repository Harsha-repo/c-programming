// two array given num1={1,2,3} and size =n and num2={2,5,6} 
// and size =m  

// now sorted array should be stored inside the num1 so that we change its 
// size to n+m
// now the elements > n are set to 0
// now we sort these 2 arrays


#include<stdio.h>

int main(){


    int num1[]={1,2,3,0,0,0};
    int num2[]={2,5,6};

    int n = 3;
    int m = 3;

    int p1=m-1;
    int p2=n-1;
    int p=(m+n)-1;

    while(p1>=0 && p2>=0){
        if(num1[p1]>num2[p2])
        {
            num1[p]=num1[p1];
            p1--;
        }
        else{
            num1[p]=num2[p2];
            p2--;
        }
        p--;
    }

    while(p2>=0){
        num1[p]=num2[p2];
        p--;
        p2--;
    }

    for(int i=0;i<n+m;i++){
        printf("%d",num1[i]);
    }

    return 0;
}


// the logic used here is littel complicated but understandable
// the sorting is done in the reversal order fisrt putting the highest element of the 2 array
// at last position and so on 
//  we compare the last elements of both arrays and grater is put at last index of num1
// on so on its done
// the second while loop is to append the remaining elements of the 2nd array
// ya see code repeatedly to understand much better