#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p1 = {2, 3}; // Initialize the first point
    struct Point p2;          // Second point to be input by user

    printf("Enter x and y for the second point: ");
    scanf("%d %d", &p2.x, &p2.y);

    printf("First point: (%d, %d)\n", p1.x, p1.y);
    printf("Second point: (%d, %d)\n", p2.x, p2.y);

    return 0;
}