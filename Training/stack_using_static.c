#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
void push(int x){
    if(top==N-1){
        printf("Stack is Full");
    }
    else{
        top++;
        stack[top]=x;
    }

}
void pop(){
    int ele;
    if(top==-1){
        printf("The stack is underflow");
    }
    else{
        ele=stack[top];
        top--;
        printf("%d is poped out of the stack\n",ele);
    }
}
void peek(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        printf("%d is top element in the stack\n",stack[top]);
    }
}
void display(){
    int i;
    if(top==-1){
        printf("stack is empty\n");
    }
    for(i=top;i>=0;i--){
            printf("%d\t",stack[i]);
     }
}
int main()
{
  
   push(10);
   push(11);
   push(12);
   push(13);
   push(14);
   pop();
   peek();
   display();
   return 0;
}