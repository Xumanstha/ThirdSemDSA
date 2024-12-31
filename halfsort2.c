#include<stdio.h>
void sort(int n[],int end)
{
    int start=0;
    int mstart=end/2;
    int mid=end/2;
    int temp[end];
    int tempi=0;
    while(start<mid&&mstart<end)
    {
        if(n[start]<n[mstart])
        {
            temp[tempi]=n[start];
            tempi++;
            start++;
        }
        else
        {
         temp[tempi]=n[mstart];
         tempi++;
         mstart++;
        }
    };
    while(mstart<end)
    {
        temp[tempi]=n[mstart];
        tempi++;
        mstart++;
    };
    while(start<mid)
    {
        temp[tempi]=n[start];
        tempi++;
        start++;
    }
    for(int i=0;i<end;i++)
    {
        n[i]=temp[i];
    }
}
int main()
{
    int num[]={6,8,9,14,1,10,11,15,16};
    int size=sizeof(num)/sizeof(num[0]);
    sort(num,size);
    printf("after sort\n");
    for(int i=0;i<size;i++)
    {
        printf("%d\n",num[i]);
    }
    return 0;
}