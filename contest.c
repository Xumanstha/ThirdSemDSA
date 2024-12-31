#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,mindex=0,lindex=0,z;
    scanf("%d",&n);
    int age[n];
    int count[n];
    for(int i=0;i<n;i++)
    {
     scanf("%d",&age[i]);
    }
    for(int i=0;i<n;i++)
    {
        z=0;
     for(int j=0;j<n;j++)
     {
      if(age[i]==age[j])
      {
          z++;
      }
     }
        count[i]=z;
    }
    int greater=count[0];
     int lower=count[0];
    for(int i=0;i<n;i++)
    {
        if(greater>=count[i])
        {
            greater=count[i];
            mindex=i;
        }
         else if(lower<=count[i])
        {
            lower=count[i];
            lindex=i;
        }
    }
    printf("%d %d",age[mindex],age[lindex]);
    return 0;
}

