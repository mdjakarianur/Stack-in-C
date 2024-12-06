
#include<stdio.h>

int top = -1;
int stack[100];

int isFull(){
    if (top==99){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(){
    int value;
    if (isFull()){
        printf("\nStack Overflow!\n");
        return;
    }

    printf("\nEnter the value: ");
    scanf("%d",&value);

    top ++;
    stack[top] = value;
}
void pop(){
    if(isEmpty()) {
        printf("\nStack is empty!\n");
        return;
    }
    printf("Popped: %d\n",stack[top]);
    top--;
}
void display(){
    if(isEmpty())
    {
        printf("\nEmpty Stack\n");
        return;
    }
    printf("\nYour Current Stack:\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n", stack[i]);
    }
}
int main()
{

    int option = 1;
    while (option)
    {
        printf ("\nStack Operation\n");
        int choice;
        printf ("1. Push\n");
        printf ("2. Pop\n");
        printf ("3. Display\n");
        printf ("4. Exit\n");

        printf ("Enter your choice: ");
        scanf   ("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 1;
        }
    }
return 0;
}
