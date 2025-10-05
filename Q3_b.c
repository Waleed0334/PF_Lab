#include <stdio.h>
int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int i = 1;
    while (i < n)
    {
        int s = i;
        while (s<=n)
        {
            printf(" ");
            s++;
        }
        int j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }  
        printf("\n");
        i++;
    }
    int a=n;
    while ( a >= 1)
    {
        int s = a;
        while (s<=n)
        {
            printf(" ");
            s++;
        }
        int j = 1;
        while (j <= a)
        {
            printf("* ");
            j++;
        }  
        printf("\n");
        a--;
    }
    return 0;
}