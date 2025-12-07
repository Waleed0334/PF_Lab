#include<stdio.h>
int main(){
float rainFall,riverFlow;
printf("Enter rate of rain fall (mm):\n");
scanf("%f",&rainFall);
printf("Enter rate of river flow (m3/s):\n");
scanf("%f",&riverFlow);
if (rainFall<50 && riverFlow<200)
{
    printf("RISK LEVEL = LOW RISK");
}else if (rainFall>=50 &&rainFall<=100 && riverFlow>=200 && riverFlow<=500)
{
    printf("RISK LEVEL = MODERATE RISK");
}else if (rainFall>100 &&rainFall<=150 && riverFlow>500 && riverFlow<=800)
{
    printf("RISK LEVEL = HIGH RISK");
}else if (rainFall>150 && riverFlow>800)
{
    printf("RISK LEVEL = SEVERE RISK - EVACUATE!");
}else{
    printf("you input wrong data");
}
    return 0;
}