#include<stdio.h>
void halfsort(int num[],int n);
void swap(int *a,int *b);
int main()
{
    int n[]={6,8,9,14,1,10,11,15,16};
    int size=sizeof(n)/sizeof(n[0]);
    // printf("%d\n",size);
    halfsort(n,size);
    for(int i=0;i<size;i++)
    {
        printf("%d\n",n[i]);
    }
    return 0;
}
void halfsort(int num[],int n)
{
    int mid=n/2;
    int m=mid;
    for(int i=0;i<mid;i++)
    {
        int j=0;
        while(j<mid)
        {
            if(num[m]<num[j+i])
            {
                swap(num+(j+i),num+(m));
            }
            j++;
        }
        m++;
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}