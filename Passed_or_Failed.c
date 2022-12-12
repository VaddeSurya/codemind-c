#include<stdio.h>
int main()
{
    int English,Maths,physics,Chemistry,ComputerScience,Physics,marks;
    scanf("%d%d%d%d%d",&English,&Maths,&Chemistry,&Physics,&ComputerScience);
    if (English>=35 && Maths>=35 && Chemistry>=35 && Physics>=35 && ComputerScience>=35)
    {
        printf("PASSED");
    }
    else
    {
        printf("FAILED");
    }
}