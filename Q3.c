#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    getchar();

    char names[n][50], ids[n][20], courses[n][50];
    char descriptions[n][150];

    for (int i = 0; i < n; i++) {
        printf("\nName of student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0';

        printf("ID of student %d: ", i + 1);
        fgets(ids[i], sizeof(ids[i]), stdin);
        ids[i][strcspn(ids[i], "\n")] = '\0';

        printf("Course name of student %d: ", i + 1);
        fgets(courses[i], sizeof(courses[i]), stdin);
        courses[i][strcspn(courses[i], "\n")] = '\0';

        strcpy(descriptions[i], names[i]);
        strcat(descriptions[i], " (ID: ");
        strcat(descriptions[i], ids[i]);
        strcat(descriptions[i], ") enrolled in ");
        strcat(descriptions[i], courses[i]);
    }

    printf("\nStudent Course Details:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", descriptions[i]);
    }

    return 0;
}
