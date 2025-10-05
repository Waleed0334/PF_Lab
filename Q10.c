#include <stdio.h>
int main() {
    int num, pos = 1, sum = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    int i,b=1;  
    while (num > 0) {
        digit = num % 10;
        printf("position %d is :%d\n",pos,digit);
        if (pos % 2 != 0) { 
            sum = sum + digit;
        }
        num = num / 10;       
        pos++;              
      }
    printf("Sum of digits in odd positions = %d\n", sum);
    return 0;
}
