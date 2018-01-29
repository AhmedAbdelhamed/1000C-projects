
#include<stdio.h>

char * check(x)
{
    return (x%2) == 0 ? "Even" :"Odd" ;
}
int main()
{
    int number;

    printf("PLZ enter The Integer Number : ");
    scanf("%d",&number);
    printf("%d is %s", number, check(number));

    return 0;
}


//#include<stdio.h>
//
//#define check(x) ((x)%2)==0?"Even" :"Odd"
//
//int main()
//{
//    int number;
//
//    printf("PLZ enter The Integer Number : ");
//    scanf("%d",&number);
//    //printf("The Number is %s", (number%2==0) ? "Even" :"Odd" );
//    printf("The Number is %s", check(number));
//
//    return 0;
//}
