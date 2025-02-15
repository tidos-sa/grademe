#include <unistd.h>
//#include <stdio.h>
//#include <stdlib.h>

int is_power_of_2(unsigned int power)
{
    int nb = power;

    while(nb >= 1)
    {
        //printf("Valor atual: %u\n", nb);
        if (nb % 2 != 0)
        {
            //printf("Valor atual: %u\n", nb);
            return 0;
        }
        nb = nb / 2;
    }

    return 1;
}


int main(void)
{
    printf("%i",is_power_of_2(10));
}