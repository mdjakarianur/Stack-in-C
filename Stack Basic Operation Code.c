
#include<stdio.h>

int top = -1;
int stack[100];

int full(){
    if (top==99)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int empty(){
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(){
    int value;
    if (full())
    {
        printf("\nStack Overflow!\n");
        return;
    }

    printf("\nEnter the value: ");
    scanf("%d",&value);

    top ++;
    stack[top] = value;
}
void pop(){
    if(empty()) {
        printf("\nStack is empty!\n");
        return;
    }
    printf("Popped: %d\n",stack[top]);
    top--;
}
void display(){
    if(empty())
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
    printf ("\n\n *** Stack Operation ***\n\n");
    while (option)
    {
        int choice;
        printf ("1. Push\n");
        printf ("2. Pop\n");
        printf ("3. Display\n");
        printf ("4. Exit\n");

        printf ("\nEnter your choice: ");
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
            return;
        }

        fflush (stdin);

        printf ("\nDo you want to continue(Type 1/0)? : ");
        scanf    ("%d", &option);
    }

return 0;
}
