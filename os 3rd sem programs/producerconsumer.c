#include<stdio.h>
#include<semaphore.h>

#define buffer[buffer_size]
int in =0;
int out =0;
sem_t mutex,empty,full;

void *producer(void*args){
for(int i=0;i<=10;i++){

int item = rand()%100;
sem_wait(&empty);
sem_wait(&mutex);


buffer[in]=item;
printf("the produced item is %d,at position %d \n",item,in);
in = (in+1)%buffer_size;

sem_post(&mutex);
sem_post(&full);
}
pthread_exit(NULL);
}

void *consumer(void*args){
    int item;
    for(int i=0;i<=10;i++){

        sem_wait(&full);
        sem_wait(&mutex);

        item = bbuffer[out];
        printf("the produced item is %d,at position %d \n",item.out);

        (out=out+1)%buffer_size;
        sem_post(&mutex);
        sem_post(&empty);

    }
    pthread_exit(NULL);
}
int main(){

    sem_init(&mutex,0,1);
    sem_init(&empty,0,buffer_size);
    sem_init(&full,0,0);

    pthread_t producer_thread,consumer_thread;
    pthread_create(&producer_thread,NULL,producer,NULL);
    pthread_create(&consumer_thread,NULL,consumer,NULL);

    pthread_join(producer_thread,NULL);
    pthread_join(consumer_thread,NULL);

    sem_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}