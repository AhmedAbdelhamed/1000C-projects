#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("PLZ enter the Year : ");
    scanf("%d",&year);
    if((year % 400 == 0) || ((year % 100) && (year % 4 == 0)))
        printf("%d is a leap year\n",year);

    else
        printf("%d is a not leap year\n",year);

    return 0;
}
