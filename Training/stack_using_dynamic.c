#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;

}; 

void push(struct node **s_ref,int x){
    struct node *new_node=(struct node *)malloc(sizeof(struct node));
    new_node->data=x;
    new_node->next=(*s_ref);
    (*s_ref)=new_node;
}
int pop(struct node **s_ref){
    int ele;
    struct node *temp=(*s_ref);
    (*s_ref)=(*s_ref)->next;
    ele=temp->data;
    free(temp);
    return ele;

}
void display(struct node *n){
      while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
      }
}
int main()
{

   struct node *stack=NULL; 
   push(&stack,10);
   push(&stack,20);
   push(&stack,30);
   printf("%d is poped\n",pop(&stack));
   display(stack);
   
   return 0;
}