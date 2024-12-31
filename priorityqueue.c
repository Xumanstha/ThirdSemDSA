#include <stdio.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];
int Priority[size];
int isFull()
{
    return rear == size-1;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int isEmpty()
{
    return rear == -1;
}
void enqueue(int value, int p)
{
    int i, j;
    if (isFull())
    {
        printf("Queue is full\n");
    }
    else
    {
        if (rear == -1)
        {
            front = front++;
        }
        rear++;
        queue[rear] = value;
        Priority[rear] = p;
        i = rear;
        j = rear;
        i = i - 1;
        while (p < Priority[i])
        {
            swap(Priority + i, Priority + j);
            swap(queue + i, queue + j);
            j = i;
            i = i - 1;
            p = Priority[j];
        };
    }
}
int dequeue()
{
    if (isEmpty())
    {
        printf("the queue is empty");
    }
    else
    {
        int element = queue[front];
        front++;
        return element;
    }
    if (front == rear)
    {
        front = 0;
        rear = 0;
    }
}
int main()
{
    enqueue(78, 5);
    enqueue(50, 3);
    enqueue(60, 4);
    enqueue(29, 2);
    enqueue(20, 3);
    enqueue(38, 6);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", queue[i]);
    }
    return 0;
}