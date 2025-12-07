#include<stdio.h>
int main(){
    char str[100];
    printf("Enter non-alphabetic Characters: \n");
    scanf("%[^A-Za-z]",str);
    printf("\nNon-Alphabetic Character are :\n");
    printf("%s", str);

    return 0;
}
