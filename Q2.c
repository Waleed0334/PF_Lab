#include<stdio.h>
int main(){
    int c,n,prime=0,a;
    printf("enter number");
    scanf("%d",&n);
    c = n;
    for (int i = 1; i <=n; i++)
    {
        if (n%i==0)
        {
            prime++;
        }
    }
    if (prime==2)
    {
      printf("%d is prime \n",c);
    }else{
        printf("%d is not prime\n",c);
    }    
    int s = 0, r,b;
     b=c;
    while (b > 0) {
        r = b % 10;
        s = r + (s * 10);
        b = b / 10;
    }
    if (c == s)
        printf(" %d is Palindrome Number",c);
    else
        printf("%d is Not Palindrome Number",c);
    return 0;
}

   