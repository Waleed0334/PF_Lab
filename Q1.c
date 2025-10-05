#include<stdio.h>
int main(){
    int factorial=1,n;
    scanf("%d",&n);
    if (n<0)
    {
      printf("invalid input");
      return 0;
    }
    
    for (int i = 1; i <= n; i++)
    {
      factorial *=i;  
    }
    printf(" factorial is %d\n",factorial);  
    return 0;
}