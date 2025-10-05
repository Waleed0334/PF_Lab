#include <stdio.h>
int main() {
    char sen[60];
    int counter = 0, length;
    char ch;
    printf("Enter a sentence: ");
    while (counter < 60) {
        ch = getchar();
        if (ch == '\n') {
            break;
        } else {
            sen[counter] = ch;
            counter++;
        }
    }
    sen[counter] = '\0';  
    length = counter;
    printf("\nReversed sentence:\n");
    int end = length - 1;
    while (end >= 0) {
        while (end >= 0 && sen[end] == ' ')
            end--;
        if (end < 0)
            break;
        int start = end;
        while (start >= 0 && sen[start] != ' ')
            start--;
        for (int i = start + 1; i <= end; i++)
            printf("%c", sen[i]);
        printf(" ");
        end = start - 1;
    }
    printf("\n");
    return 0;
}
