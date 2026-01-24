#include <stdio.h>
#define maxsize 3
int queue[maxsize];
int rear=-1,front=0;
void insert();
void delete();
void display();
void main(){ int choice;
    do{
    printf("-------QUEUE--------\n");
    printf("\n 1.insert\n 2.delete\n 3.display\n 4.exit\n");
    printf("--------------------\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch (choice){
        case 1: insert();break;
        case 2: delete();break;
        case 3: display();break;
        default : printf("invalid choice\n");
    }
    }
    while(choice!=4);
}
void insert(){
    int n;
    if(rear==maxsize-1){ 
        printf("queue is overflow\n");
    }
    else{
        printf("enter an elemrnt:");
        scanf("%d",&n);
        rear++;
        queue[rear]=n;
    }
}
void delete(){
    int n;
    if(front>rear){
        printf("queue is empty\n");
    }
    else{
        n=queue[front];
        printf("delete element is:%d\n",n);
        front++;
    }
}
void display(){
    if(front>rear){
        printf("queue is empty\n");
    }else{
        printf("queue elements is:\n");
        for(int i=rear;i>=front;i--){
            printf(" %d\n",queue[i]);
        }
    }
}





