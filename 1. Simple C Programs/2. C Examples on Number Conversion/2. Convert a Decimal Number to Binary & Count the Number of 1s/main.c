#include <stdio.h>

long convert(int);

int main()
{
    int decimal;

    scanf("%d",&decimal);
    printf("%ld",convert(decimal));

    return 0;
}

long convert(int num)
{
    if(num==0)
        return 0;

    else
    {
        return num%2+10*convert(num/2);

    }
}




//#include <stdio.h>
//
//int main()
//{
//    int decimal_num,cou=0,base=1;
//    long binary_num=0;
//
//    printf("PLZ enter Decimal Number : ");
//    scanf("%d",&decimal_num);
//
//    while( 0!= decimal_num )
//    {
//        if ( 1==(decimal_num%2) )
//            cou++;
//        binary_num += (decimal_num%2)*base;
//        decimal_num /=2;
//        base *=10;
//    }
//
//    printf("%ld\n%d",binary_num,cou);
//
//    return 0;
//}
