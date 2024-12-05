//a structure is a user defined datatype that can be used to froupe elements of different types into a single types

// 1. passing the structure members as arguments  ; 

#include<stdio.h>

struct student{
    char name[20];
    int roll;
    float perc;

};
void display(char name[20],int roll,float perc);
void display(char name[20],int roll,float perc){
printf("name = %s   roll = %d    percentage = %f",name,roll,perc);

}

int main(){
struct student j ;

printf("enter the deatails of the student :");
scanf("%s  %d  %f",j.name,&j.roll,&j.perc);
display(j.name,j.roll,j.perc);

    return 0;
}