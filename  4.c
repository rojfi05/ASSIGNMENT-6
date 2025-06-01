#include <stdio.h>

int main() {
    int n, i, search, found = 0, pos = -1;
    
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Array size must be between 1 and 100.\n");
        return 1;
    }

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = 1;
            pos = i + 1; // Position is 1-based
            break;
        }
    }

    if (found) {
        printf("Element %d found at position %d.\n", search, pos);
    } else {
        printf("Element %d not found in the array.\n", search);
    }

    return 0;
}