#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int Array[SIZE], i, sum = 0;

    printf("PLZ enter the Numbers\n");
    for( i=0 ; i<SIZE ; i++ )
    {
        scanf("%d",&Array[i]);
        sum += Array[i];
    }
    // SIZE can replaced by sum*sizeof(int)/sizeof(Array)
    printf("\nThe Sum is %d & The Average is %d\n", sum, sum/SIZE);


    return 0;
}
