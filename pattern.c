#include <stdio.h>
int main()
{
    int m, n, a, b, c, i, j;
    printf("Enter the number\n");
    scanf("%d", &n);
    m = 2 * n - 1;
    for (i = m; i >= 1; i--)
    {a=m;
        for (j = m; j >=1; j--)
        {
            if(i<m&&i>1)
        {
            if(j<m&&j>1)
            {
            printf("%d", (a+1)/2);
            }
            else{
                printf("%d",(a+1)/2);
            }
            a=a-2;
        }
        else{
            printf("%d",(m+1)/2);
            a=a-2;
        }
        }
        printf("\n");
    }
    return 0;
}
