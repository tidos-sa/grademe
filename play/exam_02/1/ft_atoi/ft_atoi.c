#include <unistd.h>

int ft_atoi(char *str)
{
    int i =0;
    int nbr = 0;
    int sinal =1;

    if (str[i] == '-')
    {
        sinal = -1;
        i++;
    }
    else if(str[i] == '+'){
        i++;
    }
    while ( str[i] && str[i] >= '0' & str[i] <= '9')
    {
        nbr = nbr * 10 + (str[i] - '0');
        i++;
    }

    return( nbr * sinal);
}

#include <stdio.h>

int main(void)
{
    printf("%i", ft_atoi("-221"));
}