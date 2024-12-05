#include <stdio.h>


struct student{

char name ;
int roll;
int marks ;



};


int main(){


struct student s1;   // object of struct 

s1.roll=9;
printf("the roll number is :%d",s1.roll);
printf("enter the details of student ");
scanf("%d",&s1.marks);
printf("the marks  is :%d", s1.marks);
    return 0 ;
}