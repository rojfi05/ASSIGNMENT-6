#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter number of rows (M): ");
    scanf("%d", &m);
    printf("Enter number of columns (N): ");
    scanf("%d", &n);

    if (m <= 0 || n <= 0 || m > 100 || n > 100) {
        printf("Matrix size should be between 1 and 100 for both rows and columns.\n");
        return 1;
    }

    int a[100][100], b[100][100], sum[100][100];

    printf("Enter elements of first matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Matrix addition
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}