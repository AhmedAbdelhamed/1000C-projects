#include <stdio.h>
#include <stdlib.h>
#include <conio2.h>
#include <ctype.h>

enum status{zero , one};
int main ()
{
   char ch;
   int num=0;
   enum status flag,sign;

   printf("PLZ enter the number  ");
   while( '\r' !=(ch=getche()) )
   {
       if( 0==isdigit(ch) && ('-'!=ch || flag==one) )
       {
           printf("\nit's a not number");
           exit(0);
       }
       if ('-'==ch)
       {
            num*=-1;
            sign=one;
       }

        else
        {
            num=num*10+ch-'0';
            flag=one;
        }
   }
   if ( 1==sign )
    num*=-1;
   printf("\nnum is : %d",num);
   printf( sign==1 && 0!=num? "\nnegative":"\npositive");
   return(0);
}



//#include <stdio.h>
//
//int main ()
//{
//   int number;
//
//   printf("PLZ enter the number  ");
//   scanf("%d",&number);
//   printf( number<0? "Odd":"Even");
//   return(0);
//}
