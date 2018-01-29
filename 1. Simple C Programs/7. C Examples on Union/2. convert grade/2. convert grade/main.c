#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    char grade;

    scanf("%c",&grade);
    grade = toupper(grade);
    switch(grade)
    {
        case 'S' : printf("SUPER\n"); break;
        case 'V' : printf("VERY GOOD\n"); break;
        default : printf("ERROR IN GRADE\n"); break;
    }

    return 0;
}
