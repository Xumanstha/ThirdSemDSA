#include <stdio.h>
#include <stdbool.h>
int main(void) {
int i=0;
bool check=false;
    int numbers[]={3,6,9,12,15,18};
    int numberToSearch;
    printf("enter the number to search:");
    scanf("%d",&numberToSearch);
    int mid;
int low=0;
int high=5;
mid=(low+high)/2;
while(low<=high)
{
if(numberToSearch==numbers[mid])
{
printf("number is found in index: %d",mid);
check=true;
break;
}
else
if(numberToSearch>numbers[mid])
{
low=mid+1;
}
else
{
high=mid-1;
}
mid=(low+high)/2;
};
if(check==false)
{
printf("number is not in the array");
}

    return 0;
}