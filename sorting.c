#include <stdio.h>
void select(int n[],int a);
void bubble(int n[],int a);
void insert(int n[],int a);
void swap(int *a,int *b);
int main()
{
    int n,choice;
    printf("Enter the number of index in array you need\n");
    scanf("%d",&n);
    int num[n];
    printf("Enter the numbers you need in array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("What sorting do you need:\n 1.selection sort\n 2. bubble sort\n 3.insertion sort\n");
    scanf("%d",&choice);
    printf("\n\n\n");
    switch(choice)
    {
        case 1:
        {
            select(num,n);
            break;
        }
        case 2:
        {
            bubble(num,n);
            break;
        }
        case 3:
        {
            insert(num,n);
            break;
        }
        default:
        {
            printf("the choice is invalid");
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}
void select(int n[],int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            if(n[i]<n[j])
            {
                swap(n+i,n+j);
            }
        }
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void bubble(int n[],int a)
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a-1-i;j++)
        {
            if(n[j]>n[j+1])
            {
                swap(n+j,n+(j+1));
            }
        }
    }
}
void insert(int n[],int a)
{
    for(int i=1;i<a;i++)
    {
        int key=n[i];
        int j=i-1;
        while(n[j]<key&&j>=0)
        {
            n[j]=n[j+1];
            j--;
        };
    }
}