#include <stdio.h>

//int biggest(int n1,int n2,int n3)
//{
//    if(n1 > n2 && n1 > n2)
//        return n1;
//    else if(n2 > n3)
//        return n2;
//    return n3;
//}

#define biggest(n1,n2,n3) ((n1)>(n2) && (n1)>(n2)) ? (n1):((n2)>(n3)?(n2):(n3))

int main()
{
    int num1, num2, num3;

    printf("PLZ enter the Three Numbers \n");
    scanf("%d%d%d",&num1, &num2, &num3);
    printf("The Biggest of them is %d",biggest(num1,num2,num3));

    return 0;
}
