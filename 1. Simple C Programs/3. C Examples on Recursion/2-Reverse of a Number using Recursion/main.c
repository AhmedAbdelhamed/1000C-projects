#include <stdio.h>
#include <math.h>

int rev(int ,int );
int main()
{
    int num1,num2;
    int l=0;

    scanf("%d",&num1);
    num2=num1;
    while(num2)
    {
        l++;
        num2/=10;
    }
    printf("%d",l);
    printf("\n%d",rev(num1,l));

    return 0;
}

int rev(int n ,int len)
{
    if(n)
        return (n%10)*pow(10,--len)+rev(n/10,len);

    else
        return 0;
}







//#include <stdio.h>
//
//int reverse(int);
//
//int main()
//{
//    int num;
//
//    scanf("%d",&num);
//    printf("\n%d",reverse(num));
//
//    return 0;
//}
//
//int x,y;
//int reverse (int n)
//{
//    if ( 0==n )
//        return 0;
//    else
//    {
//        x=n%10;
//        y=10*y+x;
//        reverse(n/10);
//    }
//    return y;
//}
