#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,reversed_number = 0;

    printf("PLZ enter the number : ");
    scanf("%d",&number);
    while(number)
    {
        reversed_number *= 10;
        reversed_number += number % 10;
        number /= 10;
    }
    printf("Reverser Number is : %d",reversed_number);

    return 0;
}
