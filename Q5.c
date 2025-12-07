#include<stdio.h>
int main(){
float marks;
printf("Enter your marks to find grade :");
scanf("%f",&marks);
if (marks>=85 && marks<=100)
{
    printf("You achived Grade 'A' on %.2f",marks);
}else if (marks>=70 && marks<=84)
{
    printf("You achived Grade 'B' on %.2f",marks);
}else if (marks>=55 && marks<=69)
{
    printf("You achived Grade 'C' on %.2f",marks);
}else if (marks>=40 && marks<=54)
{
    printf("You achived Grade 'D' on %.2f",marks);
}else{
    printf("You achived grade 'F' on %.2f",marks);
}

    return 0;
}