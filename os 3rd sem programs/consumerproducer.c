#include<stdio.h>
#include<stdlib.h>

int produce();
int consume();
int buffer[10];

int producer,consumer,choice;
int in = 0;
int out = 0;
int buffersize = 10;

int main(){



while(choice!=3){
printf("\n1.produce  2.consume  3. exit ");
scanf("%d",&choice);

switch(choice){

    case 1 : 
    produce();
    break;

    case 2 :
    consume();
    break;

    case 3 :
    exit(0);
    break;


return 0;
}
}
}
int produce(){

    if((in + 1)%buffersize==out){
        printf("buffer is full");

    }
    else{
    printf("produce a value :");
    scanf("%d",&producer);
    buffer[in]=producer;
    in = (in+1)%buffersize;
}
}

int consume(){
    if(in == out){
        printf("\nbuffer is empty");

    }
    else{
        consumer = buffer[out];
        printf("\nconsumed %d",consumer);
        out=(out+1)%buffersize;
    }
}