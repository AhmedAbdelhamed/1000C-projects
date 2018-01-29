//Sum of Digits in a given Integer
// By Ahmed Abd-Alhameed

#include <stdio.h>

int main()
{
    int number,temp,sum=0;

    printf("PLZ Enter The Integer Number : ");
    scanf("%d",&number);
    while( number )
    {
        temp = number % 10; //remainder
        sum += temp;        //update sum
        number /= 10;       //shift number
    }
    printf( "The Sum is : %d",sum );

    return 0;
}
