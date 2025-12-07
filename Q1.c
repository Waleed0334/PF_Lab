#include <stdio.h>
#include <string.h>

int main() {
    char names[5][51];
    int ids[5];

    for (int i = 0; i < 5; i++) {
        int valid = 0;
        while (!valid) {
            printf("Enter name of student %d: ", i + 1);
            fgets(names[i], sizeof(names[i]), stdin);
            names[i][strcspn(names[i], "\n")] = '\0';

            valid = 1;
            for (int j = 0; j < strlen(names[i]); j++) {
                if (!((names[i][j] >= 'A' && names[i][j] <= 'Z') ||
                      (names[i][j] >= 'a' && names[i][j] <= 'z') ||
                       names[i][j] == ' ')) {
                    valid = 0;
                    break;
                }
            }
            if (strlen(names[i]) == 0 || strlen(names[i]) > 50 || !valid) {
                printf("Invalid name! Use only alphabets (max 50 characters).\n");
                valid = 0;
            }
        }

        do {
            int result;
            printf("Enter ID of student %d: ", i + 1);
            result = scanf("%d", &ids[i]);
            while (getchar() != '\n'); 

            if (result != 1 || ids[i] <= 0) {
                printf("Invalid ID! Enter a positive integer.\n");
                ids[i] = -1;
            }
        } while (ids[i] <= 0);
    }

    printf("\nValidated Student Data:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, ID: %d\n", names[i], ids[i]);
    }

    return 0;
}
