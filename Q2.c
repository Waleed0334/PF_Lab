#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:\n");
    scanf("%d",&n);
    int a=n*2;
    int arr[a],len=0;
    printf("enter %d numbers:",a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
        len++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d,%d,",arr[i],arr[i+n]);
    }
    
    printf("\n %d is length\n",len);
    for (int i = 0; i < a; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    return 0;
}