#include <stdio.h>
#include <stdlib.h>

int main()
{
    int original_array[5], odd_array[5], even_array[5];
    char i, odd_count = 0, even_count = 0;

    printf("PLZ enter Numbers\n");
    for( i=0 ; i<5 ; i++ )
    {
        scanf("%d",&original_array[i]);
        if( original_array[i] % 2 )
        {
            odd_array[odd_count] = original_array[i];
            odd_count++;
        }
        else
        {
            even_array[even_count] = original_array[i];
            even_count++;
        }
    }
    for( i=0 ; i<even_count ; i++ )
    {
        printf("\n%d",even_array[i]);
    }
    printf("\n");
    for( i=0 ; i<odd_count ; i++ )
    {
        printf("\n%d",odd_array[i]);
    }
    return 0;
}
