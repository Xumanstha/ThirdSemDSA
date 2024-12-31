#include <stdio.h>
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int num[] = {2, 0, 3, 6, 4, 1, 5, 8};
  int n = sizeof(num) / sizeof(num[0]);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (num[i] < num[j])
      {
        swap(num + i, num + j);
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    printf("%d\n", num[i]);
  }

  return 0;
}