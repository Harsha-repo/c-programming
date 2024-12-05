void insert(){
    if(f=(r+1)%n){
        printf("ocerflow");
    }
    else{
        if(f=-=1)
        f++;
    r = r+1%n;
    printf("enter the element int queue:";
    scanf("%d",&cq[rear]));

    }
}

void del(){

    if(rear=-1){
        printf("underflow");

    }
    else{
        printf("popped "q[f])
        if(f==r){
            f=r=-1;

        }
        else{
            f=f+1%m
             
        }
    }
}
display(){
    if(f==-1){
        printf("emptu");
    }
    else{
        int i=f;
        for(i = f ; i!=r;i=i+1%n){
            printf("5d",cq[i])
        }
    }
}