#include <stdio.h>

int main()
{
    int EnglishScore, MathScore, sum = 0;
    printf("Enter your English Score: ");
    scanf("%d", &EnglishScore);
    printf("Enter your MathScore: ");
    scanf("%d", &MathScore);
    sum = MathScore + EnglishScore;

    if(sum > 120)
    {
        printf("Pass\n");
    }
    else if (MathScore < 50 || EnglishScore < 50)
    {
        printf("Fail\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}