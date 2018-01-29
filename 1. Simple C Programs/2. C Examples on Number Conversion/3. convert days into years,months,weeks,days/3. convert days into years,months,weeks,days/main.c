#include <stdio.h>
#include <stdlib.h>

void convert(int days){
    int product = days / 365;

    if (product){
        printf("%d Year%c\n",product,product==1?' ':'s');
        days %= 365;
    }

    product = days / 30;
    if (product){
        printf("%d month%c\n",product,product==1?' ':'s');
        days %= 30;
    }

    product = days / 7;
    if (product){
        printf("%d week%c\n",product,product==1?' ':'s');
        days %= 7;
    }
    printf("%d day%c\n",days,days==1?' ':'s');
}
//
//years = nday / 365;
//week = nday % 365 / 7;
//day = nday % 365 % 7

int main()
{
    int days;

    printf("PLZ enter days : ");
    scanf("%d",&days);
    convert(days);

    return 0;
}
