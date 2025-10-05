#include <stdio.h>
int main() {
    char user[10], pass[10];
    int i, len, up, low, dig;
    // Username valid
    for (;;) {
        len = 0;
        printf("Enter username (5 alphabets): ");
        scanf("%s", user);
        // Count length
        for (i = 0; user[i] != '\0'; i++)
            len++;
        if (len != 5) {
            printf("Invalid! Username must be 5 letters.\n");
            continue;
        }
        // Check alphabets only
        for (i = 0; i < len; i++) {
            if (!((user[i] >= 'A' && user[i] <= 'Z') || (user[i] >= 'a' && user[i] <= 'z'))) {
                printf("Invalid! Only alphabets allowed.\n");
                break;
            }
        }
        if (i == len)
            break;
    }
    // Password validation
    for (;;) {
        len = 0;
        up = low = dig = 0;
        printf("Enter password (6 chars): ");
        scanf("%s", pass);

        for (i = 0; pass[i] != '\0'; i++)
            len++;

        if (len != 6) {
            printf("Invalid! Password must be 6 chars.\n");
            continue;
        }

        for (i = 0; i < len; i++) {
            if (pass[i] >= 'A' && pass[i] <= 'Z')
                up = 1;
            else if (pass[i] >= 'a' && pass[i] <= 'z')
                low = 1;
            else if (pass[i] >= '0' && pass[i] <= '9')
                dig = 1;
        }

        if (up && low && dig)
            break;
        else
            printf("Invalid! Must have upper, lower, and digit.\n");
    }

    printf("\nAccount Created Successfully!\n");
    // Login section
    char u[10], p[10];
    for (;;) {
        printf("Login username: ");
        scanf("%s", u);
        printf("Login password: ");
        scanf("%s", p);

        for (i = 0; u[i] == user[i] && u[i] != '\0'; i++);
        if (u[i] != '\0') {
            printf("Wrong username!\n");
            continue;
        }

        for (i = 0; p[i] == pass[i] && p[i] != '\0'; i++);
        if (p[i] != '\0') {
            printf("Wrong password!\n");
            continue;
        }

        printf("Welcome %s, you are now logged in!\n", user);
        break;
    }
    return 0;
}
