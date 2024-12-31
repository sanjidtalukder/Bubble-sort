#include <stdio.h>

int main() {
    int i, j, n;
    int arr[30];

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("\nEnter the numbers:\n");

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted numbers in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
