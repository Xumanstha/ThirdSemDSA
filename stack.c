#include <stdio.h>
#define Max 5
int peek = -1;
int Stack[Max];
void push(int value)
{
    if (isFull())
    {
        printf("Stack full\n");
    }
    else
    {
        Stack[peek + 1] = value;
        peek++;
        printf("%d is pushed into stack\n", value);
    }
}
int pop()
{
    if (isEmpty())
    {
        printf("Stack Empty");
        return 0;
    }
    else
    {
        int value = Stack[peek--];
        return value;
    }
}
int isEmpty()
{
    return peek == -1;
}
int Peek()
{
    if (isEmpty())
    {
    }
}
int isFull()
{

    return peek == Max - 1;
}
int main()
{
    // push(5);
    // push(2);
    // push(3);
    // push(2);
    // push(10);
    // for(int i=0;peek!=-1;i++)
    // {
    //     printf("%d\n",pop());
    // }
    int choice, value;
    do
    {
        printf("1.Push\n2.Pop\n3.Peek\n4.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the number to push:\n");
            scanf("%d", &value);
            push(value);
            break;
        }
        case 2:
        {
            printf("Popped:%d\n", pop());
            break;
        }
        case 3:
        {
            printf("The peek value is:%d\n", Peek());
            break;
        }
        case 4:
        {
            break;
        }
        default:
        {
            printf("Invalid choice\n");
            break;
        }
        }
    } while (choice != 4);

    return 0;
}