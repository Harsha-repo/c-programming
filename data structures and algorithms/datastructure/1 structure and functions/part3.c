// passing the pointer to the structure as the arguments
// if the size of the structure is very large then it is not at all good to pass the copy of structure  as argument 
// we use the pointer to access the memory easily and avoid faults
#include<stdio.h>

struct student{
    char name[20];
    int roll;
    float perc;

};
void display(struct student *a);
void display(struct student *a ){
printf("name = %s   roll = %d    percentage = %f",a->name,a->roll,a->perc);

}

int main(){
struct student j ;
struct student k ;

printf("enter the deatails of the student j :");
scanf("%s  %d  %f",j.name,&j.roll,&j.perc);
display(&j);
printf("\netner the studnet details of k:");
scanf("%s  %d  %f",k.name,&k.roll,&k.perc);
display(&k);

    return 0;
}