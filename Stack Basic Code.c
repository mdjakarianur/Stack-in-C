#include<stdio.h>
int top = -1;
int stack[5];
int isFull(){
    if (top==4)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmpty(){
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data){
    if (isFull())
    {
        printf("Stack Overflow!\n");
        return;
    }

    top = top+1;
    stack[top] = data;
}
void pop(){
    if(isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }
    printf("Popped: %d\n",stack[top]);
    top=top-1;
}
void print(){
    if(isEmpty())
    {
        printf("Empty Stack");
        return;
    }
    printf("Your Current Stack:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();
    pop();
    print();
    pop();
    print();
    push(6);
    print();
    pop();
    pop();
    pop();
    pop();
    print();
  
return 0;
}
