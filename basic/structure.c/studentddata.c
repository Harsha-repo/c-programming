#include<stdio.h>
#include<stdlib.h>
int main(){
    struct student{

        char usn[50];
        char name[50];
        int marks;
    }s[10];     // till now no memory allocated for this 

    int i,n,countav=0,countbv=0;
    float sum,average;
    printf("enter the numbre of students: ");
    scanf(" %d",&n);
    printf("enter information of students: below\n ");
    // storing iinformation 
    for(i=0;i<n;i++){

printf("enter usn : ");
scanf("%d",s[i].usn);
printf("enter name : ");
scanf("%s",s[i].name);
printf("enter marks : ");
scanf("%d",s[i].marks);
printf("\n");

    }
//displaying information
for(int j=0;j<n;j++){
printf("\n usn:%d",s[i].usn);
printf("\n usn:%s",s[i].name);
printf("\n usn:%d",s[i].marks);
printf("\n");
}
// avrage
for(int i=0;i<n;i++){

    sum=sum+i;
    }
average=sum/n;
printf("average marks =%f",average);
for(i=0;i<n;i++){

    if(s[i].marks>=average)
    countav++;
    else
    countbv++;
}
printf("\n number of students above average is %d",countav);
printf("\n the students below average are %d",countbv);






    return 0;
}