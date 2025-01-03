#include <stdio.h>
void swap(int *a,int *b)
{
int temp=*a;
*a=*b;
*b=temp;
}
void sort( int num[],int n)
{
for(int i=0;i<n;i++)
 {
  for(int j=0;j<n-1-i;j++)
   {
    if(num[j]>num[j+1])
     {
        
        swap(num+j,num+(j+1));
  
     }
   }

 }
}
int main()
{
    int *p1,*p2;
 int num[]={2,0,3,6,4,1,5,8};
 int n=sizeof(num)/sizeof(num[0]);
sort(num,n);
for(int i=0;i<n;i++)
 {
printf("%d\n",num[i]);
 }
//  printf("%d",*(num+2));

return 0;

}