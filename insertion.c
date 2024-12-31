#include <stdio.h>
#include <time.h>
int main()
{
    int key;
    int num[]={10,9,8,3,2,11,0,7};
    int size=sizeof(num)/sizeof(num[0]);
    int time1=time(NULL);
    printf("Timestamp: %d\n",time1);
    for(int i=1;i<size;i++)
    {
        key=num[i];
        int j=i-1;
        while(key<num[j]&&j>=0)
        {
         num[j+1]=num[j];
         j--;
        };
        num[j+1]=key;
    }
    int time2=time(NULL);
    printf("Timelapse: %d\n",time2-time1);

        for(int i=0;i<size;i++)
        {
        printf("%d\t",num[i]);
        }
    return 0;
}