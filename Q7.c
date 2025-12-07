#include<stdio.h>
int main(){
   float unit,billAmount;
printf("Enter the total electricity units consumed:");
scanf("%f",&unit);
if (unit>0 && unit<=100)
{
    billAmount=10*unit;
    printf("Total amount of your bill is : %.2f rs",billAmount);
}else if (unit>=101 && unit<=300)
{
    billAmount=15*unit;
    printf("Total amount of your bill is : %.2f rs",billAmount);
}else if (unit>=301 && unit<=500)
{
    billAmount=20*unit;
    printf("Total amount of your bill is : %.2f rs",billAmount);
}else if (unit>500)
{
    billAmount=25*unit;
    printf("Total amount of your bill is : %.2f rs",billAmount);
}else{
    printf("Enter valid units");
}
    return 0;
}