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

    int matrix[100][100];

    printf("Enter elements of the matrix (%d x %d):\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}