#include<stdio.h>

void print_binary(int num)
{
    int number_of_bits = 8 * sizeof(int) - 1;
    for( ; number_of_bits>=0 ; number_of_bits-- )
    {
        printf("%c",1<<number_of_bits & num ? '1':'0');
    }
}

int main(void){
	print_binary(1);
    return 0;
}
