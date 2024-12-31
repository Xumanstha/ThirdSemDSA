#include <stdio.h>
void swap(int *,int *);
int partition(int num[],int low,int high)
{
int j=low-1;
int pivot=num[high-1];
for(int k=low;k<high-1;k++)
{
    if(pivot>num[k])
    {
        j++;
        swap(num+j,num+k);
    }
}
swap(num+(j+1),num+(high-1));
return (j+1);
}
void quicksort(int numbers[],int low,int high)
{
    if(low<high)
    {
        int pivotIndex=partition(numbers,low,high);
        quicksort(numbers,low,pivotIndex);
        quicksort(numbers,pivotIndex,high);
    }
}
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=*a;
}
int main()
{
    int arr[]={6,9,4,3,1,5};
    quicksort(arr,0,6);
    for(int i=0;i<6;i++)
    {
        printf("%d\n",arr[i]);
    }
return 0;
}