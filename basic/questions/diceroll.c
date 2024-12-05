#include<stdio.h>
#include<time.h>

int main(){

// declare the time function that gives rand number 
srand(time(NULL));  // seeding the random number within time nuLL 
printf("number of times the dice to be rolled :");

int count;
scanf("%d",&count);
int dice =0;

for(int i=0;i<count;i++){

 dice = (rand() %6 )+1; 
 printf("%d\n",dice);
}


    return 0;
}
// random number range is 0-32000  but when we dicide it by 6 we get remider b/w 0-5 adding +1 will rerturn
// 1-6 range