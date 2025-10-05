#include<stdio.h> 
int main(){
    int n;
    printf("enter number");
    scanf("%d",&n);
    int a=0,b=1,c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            printf("%d ",a);
            c=a+b;
            a=b;
            b=c;
        }
        printf("\n");
    }
    
    return 0;
}

