#include<stdio.h>


// int readmatrix(int matrix[10][10]);
// void display_matrix(int matrix[10][10]);
// void calculate_need(int matrix[10][10]);


int main(){
int max[10][10],allocation[10][10],need[10][10];
int avail[10];
int np,nr;
void banker();

printf("enter the number of process:");
scanf("%d",&np);
printf("\n enter the number of resources :");
scanf("%d",&nr);
printf("\nenter the allocation matrix :");
readmatrix( allocation[10][10]);
printf("\nenter the max matrix :");
readmatrix( max[10][10]);
printf("\nenter the avilable resources:");
for(int i=0;i<nr;i++){
    scanf("%d",avail[i]);
}

// for displayin the matrices inputed 

printf("\n initial allocation ");
display_matrix(allocation);
printf("\n\nmax requirement ");
display_matrix(max);
printf("\n\navailable memory resource:");
for(int i=0;i<nr;i++){
    printf("%d",avail[i]);
}

// calculate and print need of the matrix 

printf("\n\nneed matrix\n");
calculate_need(need);
display_matrix(need);
banker();
    return 0;


}

void read_matrix(int matrix[10][10]){
    int i,j;
    for(i=0;i<np;i++){
        for(j=0;j<nr;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
}

void display_matrix(int matrix [10][10]){

    int i,j;
    for(i=0;i<np;i++){
        for(j=0;j<nr;j++){
            printf("%d",matrix[i][j]);
        }
    }
}

void calculate_need(int matrix[10][10]){

    for(int i=0;i<np;i++){
        for(int j=0;j<nr;j++){
            need[i][j]=max[i][j]-allocation[i][j];
        }
    }
}

void banker(){
    int i,j,k=0,flag;
    int finish[10],safe_seq[10]; // one to check the progress of completion and other to store the safe sequence 

    for(i=0;i<np;i++){
        finish[i]=0;     // saying that all the process are incomplete 
    }


    for(i=0;i<np;i++){
        flag =0;
        if(finish[i]==0){
            for(j=0;j<nr;j++){
                if(need[i][j]>avail[j]){
                flag =1;
                break;
                }
            }

        if(flag ==0){    // after each and every loop checks need if above if satisfies then flag =1 if not flag =0 every time 
                                  // then control comes to flag ==0 . since flag ==0  need < avail now the value of finish turn to 1
                                  // later that i becomes the sequence at which the finish is becoming one and with that safe_seq obtained
            finish[i]=1;
            safe_seq[k] = i;
                 k++;

            // now we add released allocation  to avail
            for(j=0;j<nr;j++){
                avail[j]=avail[j]+allocation[i][j];
            }

            i=-1;  // this to start checking from first process again

        }
        }


    }
// aftera ll aeexcution the finish [i] eeventually turn to 1 , if not then some process is not executed and deadlock occured

flag =0;
for(i=0;i<np;i++){
    if(finish[i]==0){
        printf("system is in deadlock");
        flag =1;
        break;
    }
}

if(flag==0){
    printf("syystem is safe state ");
    for(i=0;i<np;i++){
        printf("p%d",safe_seq[i]);
    }
}

}