#include <stdio.h>
int main() {
    int num, temp, rev = 0, digit, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;  
    do {
        count++;
        temp = temp / 10;
    } while (temp != 0);
    temp = num;
    do {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    } while (temp != 0);
    int i = 1;
    do {
        digit = rev % 10;
        printf("Digit %d: %d\n", i, digit);
        rev = rev / 10;
        i++;
    } while (rev != 0);
    return 0;
}

