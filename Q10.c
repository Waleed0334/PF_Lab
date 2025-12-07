#include<stdio.h>
int main(){
    float aM,hT,pR,F,zC,sB,cRs,CI;
    printf("give score on Akhlaq & Manners:(0-10)\n");
    scanf("%f",&aM);
    printf("give score on Honesty & Trustworthness:(0-10)\n");
    scanf("%f",&hT);
    printf("give score on Prayer Regularity:(0/1)(regularity=1 or irregularity=0)\n");
    scanf("%f",&pR);
    printf("give score on Fasting(swam):(0/1/2)(never=0,sometimes=1,always=2)\n");
    scanf("%f",&F);
    printf("give score on Zakat & Charity:(0-10)\n");
    scanf("%f",&zC);
    printf("give score on Social Behavior:(0-10)\n");
    scanf("%f",&sB);
    printf("give score on Conflict Resolution Skills:(0-10)\n");
    scanf("%f",&cRs);
    if (aM<0 || aM>10 || hT<0 || hT>10 ||(pR!=0 && pR!=1) ||( F!=0 &&F!=1 &&F!=2 )||zC<0 ||zC>10||sB<0 || sB>10 ||cRs<0 || cRs>10)
    {
        printf("you put wrong range ,check again");
        return 0;
    }else{
        CI=(aM*2.5)+(hT*2.0)+(pR*1.5)+(F*5)+(zC*1.0)+(sB*1.0)+(cRs*1.0);
        printf("Your Character Index is : %.2f \n",CI);
        printf("Your Classificaton & Remarks are:\n");
        if (CI>=85 && CI<=100)
        {
            printf("Classification : Excellent Muslim Character \n");
            printf("Remarks : Role model for society ");
        }else if (CI>=70 && CI<=84)
        {
            printf("Classification : Good Muslim Character \n");
            printf("Remarks : Practicing believer ");
        }else if (CI>=50 && CI<=69)
        {
            printf("Classification : Average Character \n");
            printf("Remarks : Needs minor improvement ");

        }else if (CI>=30 && CI<=49)
        {
            printf("Classification : Needs Improvement \n");
            printf("Remarks : Work on Akhlaq & Ibadah ");

        }else{
            printf("Classification : Weak Character\n");
            printf("Remarks : Requires serious guidance");
        }      
    }
    
    return 0;
}