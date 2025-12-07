#include<stdio.h>
#include<math.h>
int main(){
    int num1 ,num2 ,operator,result;
printf("Enter two numbers:\n ");
scanf("%d \n%d",&num1,&num2);
printf("select the operator : (+=1,-=2,*=3,/=4,%%=5,^=6,)\n");
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
case 4: if (num2 == 0)
{
    printf("Division by zero is not possible");
    return 0;
}else{
    
    result = num1/num2;
    break;
}
  
case 5:
    if (num2==0)
    {
         printf("modulas by zero is not possible:");
         return 0;
    }else{
        result=num1%num2;
        break;
    }
    
case 6:
    result = pow(num1,num2);
    break;
default:
   printf("you use incorrect operator:");
    return 0;
}
printf("your result is %d",result);

    return 0;
}