#include <stdio.h>
#include <stdlib.h>


int main()
{
    int number;
    int odd_sum = 0,even_sum = 0;
    char state;

    do{
        printf("PLZ enter the number : ");
        scanf("%d",&number);
        number % 2? (odd_sum += number) : (even_sum += number );
        printf("add another number (1/0) : ");
        scanf("%d",&state);
    }while(state == 1);
    printf("\neven_sum = %d\nodd_sum = %d\n",even_sum,odd_sum);

    return 0;
}
