#include <stdio.h>

int main()
{
 int price, day, sum = 0;
 printf("Trip duration days: ");
 scanf("%d", &day);
 printf("One-way airfare($): ");
 scanf("%d", &price);
 sum = sum + price * 2;
 printf("Hotel price per night($): ");
 scanf("%d", &price);
 sum = sum + price * (day-1);
 printf("Daily expensive($): ");
 scanf("%d", &price);
 sum = sum + price * day;
 printf("===============\n");
 printf("Total travle cost: %d$\n", sum);
 printf("===============\n");
}