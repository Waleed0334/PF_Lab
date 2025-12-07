#include<stdio.h>
int main(){
int integer;
printf("Enter the integer:\n");
scanf("%d",&integer);
if (integer%2==0)
{
    printf("Your integer is an even");
}else{
    printf("Youe integer is an odd");
}
    return 0;
}