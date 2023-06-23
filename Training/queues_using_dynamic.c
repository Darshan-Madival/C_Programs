//queues using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
void enqueue(int x){
    struct node*new_node=(struct node*)malloc(sizeof(struct node*));
    new_node->data=x;
    new_node->next=0;
    if(front==0 && rear==0){
        front=rear=new_node;
    }
    else{
        rear->next=new_node;
        rear=new_node;
    }
}
void display(){
    struct node *temp;
    if(front==0 && rear==0){
        printf("The queue is empty");
    }
    else{
        temp=front;
        while(temp!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }

}
void dequeue(int x){
    struct node*temp=NULL;
    if(front==0 && rear==0){
        printf("The queue is empty");
    }
    else{
        temp=front;
        front=temp->next;
        printf("The dequeued element is %d\n",*temp);
        free(temp);
    }
}
void peek(){
    printf("The peek element is %d\n",*front);
}
int main()
{
   enqueue(10);
   enqueue(20);
   enqueue(30);
   enqueue(40);
   dequeue(10);
   dequeue(20);
   peek();
   display();
   return 0;
}