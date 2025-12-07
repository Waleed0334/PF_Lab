#include<stdio.h>
int main(){
    
    int temp = 0; 
    int search;
    int num[10];
    printf("==== Enter 10 Numbers ====\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d is: ", i);
        scanf("%d", &num[i]);  
    }
    
    printf("\nEnter Number which you want to search: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++)
    {
        if (search == num[i])
        {
            printf("The number is at index %d\n", i);
            temp++;
        }
    }
    if (temp == 0)
        printf("Number does not exist");
    else
        printf("Number present %d times", temp);

    return 0;
}
