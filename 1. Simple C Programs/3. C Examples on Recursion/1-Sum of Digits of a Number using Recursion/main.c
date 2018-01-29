#include <stdio.h>

int sum(int );

int main()
{
    int num,s;

    scanf("%d",&num);
    s=sum(num);
    printf("\n%d",s);

    return 0;
}

int sum(int n)
{
    if(0==n)
        return 0;

    else
        return ( n%10 + sum(n/10));
}
