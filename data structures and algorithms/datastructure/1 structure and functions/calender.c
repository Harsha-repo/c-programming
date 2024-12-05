
//1 .
// Develop a Program in C for the following:
// a) Declare a calendar as an array of 7 elements (A dynamically Created array) to 
// represent7 days of a week. Each Element of the array is a structure having three 
// fields. The first field is the name of the Day (A dynamically allocated String), The 
// second field is the date of the Day (A integer), the third field is the description of 
// the activity for a particular day (A dynamically allocated String).
// b) Write functions create(), read() and display(); to create the calendar, to read the 
// data from the keyboard and to print weeks activity details report on screen.

#include<stdio.h>
#include<stdlib.h>

struct day{
    char *dayname;
    int date;
    char *activity;

}d;
struct day create(){       // we are only creating the memory spaces for the calenders date day and activity
    
    d.dayname=(char *)malloc(10*sizeof(char));
    d.activity=(char *)malloc(100*sizeof(char));
    
    printf("\nenter date:");
    scanf("%d",&d.date);
    printf("\nenter day name:");
    scanf("%s",d.dayname);
    printf("\nenter the activity :");
    scanf("%s",d.activity);
    return d;
}
void read(struct day calender[],int numdays){

    for(int i=0;i<numdays;i++){
        calender[i]=create();
    }
}

void display(struct day calender[],int numdays){
    printf("date     day       activity");
    for(int i=0;i<numdays;i++){
        printf("\n%d        %s         %s ",calender[i].date,calender[i].dayname,calender[i].activity);
    }

}

int main(){

int numdays=7;
struct day calender[numdays];
read(calender,numdays);
display(calender,numdays);

    return 0;
}