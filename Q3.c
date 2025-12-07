#include<stdio.h>
int main(){
    float waterLevel;
printf("Enter the water level of your area (in ft)\n");
scanf("%f",&waterLevel);
if (waterLevel>=0 && waterLevel<2)
{
    printf("No Relief Required on %.2f ft waterlevel",waterLevel);
}else if (waterLevel>=2 &&waterLevel<=4)
{
    printf("Small Relief Package on %.2f ft waterlevel",waterLevel);
}else if (waterLevel>4 && waterLevel<=6)
{
    printf("Medium Relief Package on %.2f ft waterlevel",waterLevel);
}else if (waterLevel>6){
    printf("Evacuation Required on %.2f ft waterlevel",waterLevel);
}else{
    printf("Enter valid water level");
}
    return 0;
}