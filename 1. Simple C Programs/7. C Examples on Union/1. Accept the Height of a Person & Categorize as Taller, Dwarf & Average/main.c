#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height;
    printf("PLZ enter Height of a Person : ");
    scanf("%f",&height);
    printf("%s", height<150? "Dwarf": height>=150 && height<=165?\
            "Average Height": height>165 && height<=195? "Taller":"Abnormal height");

    return 0;
}
