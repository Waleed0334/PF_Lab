#include<stdio.h>
int main(){
int num1 ,num2 ,operator,result;
printf("Enter two numbers: ");
scanf("%d \n%d",&num1,&num2);
printf("select the operator : (+=1,-=2,*=3,/=4)\n");
scanf("%d",&operator);
switch (operator)
{
case 1:
    result = num1+num2;
    break;
case 2:
     result = num1-num2;
    break;
case 3:
    result = num1*num2;
    break;
case 4: 
    result = num1/num2;
    break;    
default:
   printf("correct valid operator:");
    return 0;
}
printf("your result is %d",result);
    return 0;
}