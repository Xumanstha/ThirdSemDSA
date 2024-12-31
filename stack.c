#include <stdio.h>
#define Max 10
int peek=-1;
int Stack[Max];
void push(int value)
{
    if(peek==Max-1)
    {
        printf("Stack full\n");
    }
    else
    {
Stack[peek+1]=value;
peek++;
    }
}
int pop()
{
    if(peek==-1)
    {
        printf("Stack Empty");
        return 0;
    }
    else{
        int value=Stack[peek--];
        return value;
    }
}
int isEmpty()
{
    if (peek==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isFull()
{
    if(peek==Max-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    push(5);
    push(2);
    push(3);
    push(2);
    push(10);
    for(int i=0;peek!=-1;i++)
    {
        printf("%d\n",pop());
    }
  
    return 0;
}