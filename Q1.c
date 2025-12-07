#include<stdio.h>
int main(){
    int temp;
    int num[5];
    printf("Enter 5 Number: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    temp=num[4];
    printf("\n");
    for (int i = 3;i >= 0; i--)
    {
        num[i +1]=num[i];
    }
    num[0]=temp;
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}