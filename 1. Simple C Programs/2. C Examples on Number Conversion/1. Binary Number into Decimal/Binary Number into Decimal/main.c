#include <stdio.h>
#include<math.h>

int to_decimal(binary_num)
{
    int decimal_num = 0;
    char i;

    for( i=0 ; binary_num != 0; i++ )
    {
        if( binary_num & 1 )
            decimal_num += pow(2,i);
        binary_num /= 10;
    }
    return decimal_num;
}

int main()
{
    unsigned int decimal_num, binary_num;

    printf("PLZ enter binary number : ");
    scanf("%d",&binary_num);
    decimal_num = to_decimal(binary_num);
    printf("%d binary = %d Decimal",binary_num,decimal_num);

    return 0;
}
