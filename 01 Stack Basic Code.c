#include <stdio.h>
#define size 3

int stack[size];
int top = -1;

int isFull();
int isEmpty();
void push();
void pop();
void display();

int main(){
    int choice, option = 1;
    printf ("Stack Operation:\n");
    while (option)
    {
        printf ("1. Push\n");
        printf ("2. Pop\n");
        printf ("3. Display\n");
        printf ("4. Exit");
        
        printf ("Enter your choice: ");
        scanf    ("%d", &choice);
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
            return 0;
        }
        fflush (stdin);
        printf ("Do you want to continue(Type 0 or 1)? : ");
        scanf    ("%d", &option);
    }
    return 0;
}

int isFull (){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0; 
    }
}

void push ()
{
    int data;
    if (isFull())
    {
        printf ("Stack is OverFlow.\n");
        return;
    }
    else
    {
        printf ("Enter the element to be pushed: ");
        scanf ("%d", &data);
        top ++;
        stack[top] = data;
    }
}

void pop (){
    if (isEmpty())
    {
        printf ("Stack is Empty.\n");
        return;
    }
    else
    {
        printf ("poped element is = %d\n", stack[top]);
        top--;
    }
}

void display ()
{
    int i;
    if (isEmpty())
    {
        printf ("Stack is empty.\n");
        return;
    }
    else
    {
        printf ("\nStack element are:\n");
        for (i = top; i >= 0; i--)
        {
            printf ("%d\n", stack[i]);
        }
    }
    printf ("\n");
}
