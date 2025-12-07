#include<stdio.h>
int main(){
    
int integer;
printf("Enter the integer : \n");
scanf("%d",&integer);
if (integer>0)
{
    printf("%d is  positive integer.",integer); 
}else if (integer<0)
{
    printf("%d is negative integer.",integer);
}else  
{
    printf("%d is Zero.",integer);
}
    return 0;
}
