//Sum of Digits in a given Integer
// By Ahmed Abd-Alhameed

#include <stdio.h>

int sum(int [],int);

int main()
{
    int n;

    scanf("%d",&n);
    int i,arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Sum is : %d",sum(arr,n));

    return 0;
}

int sum(int a[],int n)
{
    if( 0==n )
        return 0;
    else
        return a[n-1]+sum(a,n-1);
}
