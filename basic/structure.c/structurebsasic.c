#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

struct student{

    char name ='h';
    int roll;
};

struct student s;
printf("enter the student name :");
// scanf("%s",s.name);
printf("%c",s.name);


    return 0;
}


// two ways of declaring the stucture variables 
/* with template : struct  structurename{
    member 1 ;
    member 2:
    .
    .
    .

}; variable 1 , variable 2 ...


after template : struct stucturename var1,var2...;
*/