#include<stdio.h>
int main(){
    int n;
    printf(" how many number you to enter:\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter Numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
            arr[i]=0;
        }else{
            arr[i]=1;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}