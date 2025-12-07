#include <stdio.h>
int main() {
    char sen[20];
    int i, length = 0, flag = 0;

    printf("Enter a word:\n");
    gets(sen);
    while (sen[length] != '\0') {
        length++;
    }

    for (i = 0; i < length / 2; i++) {
        if (sen[i] != sen[length - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
