#include <stdio.h>


int main()
{
    unsigned int year;

    printf("PLZ enter the Year : ");
    scanf("%d",&year);
    printf("Last two Digits is %02d",year%100);

    return 0;
}
