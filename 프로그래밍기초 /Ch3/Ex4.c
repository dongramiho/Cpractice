#include <stdio.h>

int main()
{
    int fineDust;
    printf("Enter fine dust value: ");
    scanf("%d", &fineDust);
    if(fineDust >= 0 && fineDust <= 30)
    {
        printf("Fine dust level is Good\n");
    }
    else if(fineDust >= 31 && fineDust <= 80)
    {
        printf("Fine dust level is Normal\n");
    }
    else if(fineDust >= 81 && fineDust <= 150)
    {
        printf("Fine dust level is Bad\n");
    }
    else
    {
        printf("Fine dust level is Very Bad\n");
    }
    return 0;
}