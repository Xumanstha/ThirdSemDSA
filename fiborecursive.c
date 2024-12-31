// #include<stdio.h>
// int main()
// {
//     int n,a=0,f,b=1,i=2;
//     printf("Enter the number of fibonacci number you need\n");
//     scanf("%d",&n);
//     printf("%d\n%d\n",a,b);
//     do
//     {
//      b=a+b;
//       printf("%d\n",b);
//       a=a+b;
//       i++;
      
//     } while (i<n);
//     return 0;
// }
#include <stdio.h>
int fibo(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main()
{ 
    for(int i=0;i<9;i++)
  {printf("%d\n",fibo(i));}
}