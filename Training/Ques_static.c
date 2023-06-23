//queues using static memory allocation
#include<stdio.h>
#define N 5
int queues[N];
int front=-1;
int rear=-1;
void enqueue(int x){
    if(rear==N-1){
       printf("The queue is full");
    }
    else if(front==-1 && rear==-1){
        front=rear=0;
        queues[rear]=x;
    }
    else{
        rear++;
        queues[rear]=x;
    }
}
void dequeue(int x){
    if(front==-1 && rear==-1){
        printf("The stack is empty");
    }
    else if(front==rear){
        front=rear=-1;
    }
    else{
    printf("The dequeued element is %d\n",queues[front]);
    front++;
    }
}
void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("The queue is empty");
    }
    else{
        for(i=front;i<rear+1;i++){
            printf("%d\n",queues[i]);
        }
    }
}
void peek(){
    printf("The peek element is %d",queues[front]);
}
int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   dequeue(10);
   dequeue(20);
   display();
   peek();

   return 0;
}