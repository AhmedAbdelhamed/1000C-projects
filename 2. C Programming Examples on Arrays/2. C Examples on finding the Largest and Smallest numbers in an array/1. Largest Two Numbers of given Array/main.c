#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int Array[SIZE], first_larger, second_larger;
    char i, second_larger_flag = 0;

    printf("PLZ enter The Numbers\n");
    scanf("%d",&Array[0]);
    first_larger = Array[0];
    second_larger = Array[0];
    for( i=1 ; i<SIZE ; i++ )
    {
        scanf("%d",&Array[i]);
        if(Array[i] < first_larger && second_larger_flag == 0 )
        {
            second_larger =  Array[i];
            second_larger_flag = 1;
        }
        if( Array[i] > first_larger )
        {
            second_larger = first_larger;
            first_larger = Array[i];
            second_larger_flag = 1;
        }
        else if( Array[i] > second_larger )
            second_larger = Array[i];
    }
    printf("The First Larger is : %d\nThe Second Larger is : %d\n",first_larger,second_larger);

    return 0;
}
