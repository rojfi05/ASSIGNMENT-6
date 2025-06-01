#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];
    int i, highest_index = 0;

    // Input details for 3 students
    for (i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the student with the highest marks
    for (i = 1; i < 3; i++) {
        if (students[i].marks > students[highest_index].marks) {
            highest_index = i;
        }
    }

    // Display student with highest marks
    printf("\nStudent with highest marks:\n");
    printf("Name: %s\n", students[highest_index].name);
    printf("Roll number: %d\n", students[highest_index].roll);
    printf("Marks: %.2f\n", students[highest_index].marks);

    return 0;
}