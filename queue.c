#include <stdio.h>
#include <stdbool.h>
#define size 100
int queue[size];
int front =-1;
int rear=0;
void enqueue(int element)
{
    if(isfull())
    {
        printf("Queue is full");
    }
    else{
        queue[++front]=element;
    }
}
int dequeue()
{
    if(isEmpty())
    {
        printf("the queue is empty");
    }
    else{
       int element=queue[rear];
        rear++;
        return element;
    }
}
int isfull()
{
    // if(rear>=size)
    // {
    //     return 1;
    // }
    // else{
    //     return 0;
    // }
    return rear>=size;
}
int isEmpty()
{
    // if(front==rear-1)
    // {
    //     return 1;
    // }
    // else{
    //     return 0;
    // }
    return front==rear-1;
}
int main()
{
    enqueue(78);
    enqueue(50);
    enqueue(60);
    int i=rear;
    while (i<=front) {
      printf("%d\n",dequeue());
        i++;
    }

    return 0;
}