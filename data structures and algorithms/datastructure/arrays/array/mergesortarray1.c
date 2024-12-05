// nums1=[0,4,8,9,0,0,0,0]  m = 4
// nums2=[5,6]  n = 2
//nums3=[2,3]  o=2


#include<stdio.h>


int main(){

    int nums1[]={0,4,8,9,0,0,0,0};
    int nums2[]={5,6};
    int nums3[]={2,3};

    int m = 4;
    int n = 2;
    int o = 2;


    int p=m+n+o;
    int p1=m-1;
    int p2 = n-1;
    int p3=o-1; 

    while(p1>=0 && p2>=0 && p3>=0){
        

        if(nums1[p1]<nums2[p2] && nums1[p1]<nums3[p3] && nums2[p2]<nums3[p3]){
            nums1[p]=nums3[p3];
            p1--;
            p2--;
            p3--;
        }
        else if(nums1[p1]<nums2[p2] && nums1[p1]<nums3[p3] && nums2[p2]>nums3[p3]){
            nums1[p]=nums2[p2];
            p1--;
            p2--;
            p3--;
        }

        else if(nums2[p2]<nums1[p1] && nums2[p2]<nums3[p3] && nums1[p1]<nums3[p3]){
            nums1[p]=nums3[p3];
            p1--;
            p2--;
            p3--;
        }

        else if(nums2[p2]<nums1[p1] && nums2[p2]<nums3[p3] && nums1[p1]>nums3[p3]){
            nums1[p]=nums1[p1];
            p1--;
            p2--;
            p3--;
        }
        else if(nums3[p3]<nums1[p1] && nums3[p3]<nums2[p2] && nums1[p1]<nums2[p2]){
            nums1[p]=nums2[p2];
            p1--;
            p2--;
            p3--;
        }
        else{
            nums1[p]=nums1[p1];
            p1--;
            p2--;
            p3--;
        }

        p--;
    }

    while(p2>=0){
        nums1[p]=nums2[p2];
        p--;
        p2--;
    }

    while(p3>=0){
        nums1[p]=nums2[p2];
        p--;
        p2--;
    }

    for(int i=0;i<n+m+o;i++){
        printf("%d",nums1[i]);
    }


    return 0;  
}
