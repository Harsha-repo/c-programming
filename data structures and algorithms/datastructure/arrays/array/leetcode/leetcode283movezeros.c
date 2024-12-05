// // given integer array  move all the zeros to the end of the array 
// // do not use make new array but same array should be modified 
// // input:0,1,0,3,12
// // output:1,3,12,0,0


/*method 1 using two for loops swapping them when you compare elemets both are not zero and so on */

// #include<stdio.h>

// int main(){

//     int a[]={0,1,0,3,12};

//     int size = sizeof(a)/sizeof(a[0]);

//     printf("size :%d\n",size);

//     int temp;
//     for(int i=0;i<size;i++){
//         for(int j = 0;j<size;j++){
//             if (a[j]==0 && a[j+1]!=0){
//                 temp=a[j];
//                 a[j]=a[j+1];
//                 a[j+1]=temp;
//             }

//         }
//     }

//     for(int i=0;i<size;i++){
//         printf(" %d",a[i]);
//     }

//     return 0;
// }



// but from the above code we can say that T.C is O(n^2) since we are using two loops , can we do it in O(n) ?

/*  method 2 */
// ya to do it in o(n) we have this idea of identification of the non zero elemnts from the beginning of the array and putting
// them in the array by and index pointer , increamenting as per the additiion of the non zero element 
// later remaining size is filled with zero


// #include<stdio.h>

// int main(){

//     int a[]={0,1,0,3,12};

//     int size = sizeof(a)/sizeof(a[0]);

//     printf("size :%d\n",size);

//     int nzIndex=0;

//     int temp;
    

//     for(int i=0;i<size;i++){
//         if (a[i]!=0){
//             a[nzIndex]=a[i];
//             nzIndex++;
//         }
        
//     }

//     for (int i=nzIndex;i<size;i++){
//         a[i]=0;
//     }

//     for(int i=0;i<size;i++){
//         printf(" %d",a[i]);
//     }

//     return 0;
// }

// the time complexity is O(n) for first loop and O(n) for 2nd loop both its O(2n) and 2 is ignored and hence O(n) this is good ;






// method 3


#include<stdio.h>

int main(){

    int a[]={0,1,0,3,12};

    int size = sizeof(a)/sizeof(a[0]);

    printf("size :%d\n",size);

    int nzIndex=0;

    
    int right=size;
    int count=0;

    for(int i=0;i<size;i++){
        if (a[i]!=0){
            a[nzIndex]=a[i];
            nzIndex++;
        }

        if (a[i]==0){
            
            a[size]=a[i];
            right--;
        }
        
    }

    for (int i=nzIndex;i<size;i++){
        a[i]=0;
    }

    for(int i=0;i<size;i++){
        printf(" %d",a[i]);
    }

    return 0;
}

