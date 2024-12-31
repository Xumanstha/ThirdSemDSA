#include <stdio.h>
void sort(int A[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = 0, num = high - low + 1;
    int temp[num];
    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            temp[k] = A[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = A[j];
            j++;
            k++;
        }
    };
    while (i <= mid)
    {
        temp[k] = A[i];
        k++;
        i++;
    };
    while (j <= high)
    {
        temp[k] = A[j];
        k++;
        j++;
    };
    for (int in = 0; in < num; in++)
    {
        A[low] = temp[in];
        low++;
    }
}
void Merge(int Num[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        Merge(Num, low, mid);
        Merge(Num, mid + 1, high);
        sort(Num, low, mid, high);
    }
}
int main()
{
    int numbers[] = {1, 5, 3, 2, 6, 9, 8, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    printf("Array before sorting:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", numbers[i]);
    }
    Merge(numbers, 0, size - 1);
    printf("\nArray after sorting:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d\t", numbers[i]);
    }
    return 0;
}