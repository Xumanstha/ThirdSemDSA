#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    struct Node *next;
    int data;
}Node;
Node *head = NULL;
void insert(int data)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void display()
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    display();
    return 0;
}