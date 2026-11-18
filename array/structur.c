#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
};

int main() {
    int n, i, j, maxIdx = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[50];

    for (i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        s[i].total = 0;
        for (j = 0; j < 3; j++) {
            printf("Marks in Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }

    for (i = 1; i < n; i++) {
        if (s[i].total > s[maxIdx].total) {
            maxIdx = i;
        }
    }

    printf("\n--- Student with Highest Total Marks ---\n");
    printf("Roll Number : %d\n", s[maxIdx].roll);
    printf("Name        : %s\n", s[maxIdx].name);
    printf("Total Marks : %.2f\n", s[maxIdx].total);

    return 0;
}