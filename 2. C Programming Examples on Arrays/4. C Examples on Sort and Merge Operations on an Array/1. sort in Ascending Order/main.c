#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int array[SIZE],temp;
    char i,j;

    printf("PLZ enter Numbers\n");
    for( i=0 ; i<SIZE ; i++ )
    {
        scanf("%d",&array[i]);
        for( j=i-1 ; j>-1 ; j--)
        {
            if(array[j+1] < array[j])
            {
                temp = array[j+1];
                array[j+1] = array[j];
                array[j] = temp;
            }
            else
                break;
        }
    }
    for( i=0 ; i<SIZE ; i++ )
    {
        printf("\n%d",array[i]);
    }

    return 0;
}
