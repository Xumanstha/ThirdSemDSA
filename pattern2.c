#include <stdio.h>

int main() {
    int n; // Base number for the pattern
    printf("Enter the base number: ");
    scanf("%d", &n);

    int size = (2 * n) - 1; // Size of the square pattern
    for (int i = 0; i < size; i++) {  // Loop for rows
        for (int j = 0; j < size; j++) {  // Loop for columns
            // Calculate the number to print based on the minimum distance from the edges
            int min_dist = i < size - i ? i : size - i - 1;
            min_dist = min_dist < j ? min_dist : j;
            min_dist = min_dist < size - j - 1 ? min_dist : size - j - 1;

            printf("%d ", n - min_dist);
        }
        printf("\n");
    }

    return 0;
}
