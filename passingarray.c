#include <stdio.h>
void swap(int num[], int b)
{
    for (int i = 0; i < b; i++)
    {
        printf("%d\n", num[i]);
    }
}
int main()
{
    int num[] = {9, 3, 4, 5, 67, 7};
    int size = sizeof(num) / sizeof(num[0]);
    swap(num, size);
    return 0;
}