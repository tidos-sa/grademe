#include <stdlib.h>
int get_nbr(int nbr)
{
    int len = 0;

    if (nbr <= 0)
        len++;

    while(nbr != 0)
    {
        nbr = (nbr / 10);
        len++;
    }

    return len;
}

int nbr_convert(int nbr)
{
    if (nbr < 0)
        return (-nbr);
    return nbr;
}

char *itoa(int nbr)
{
    char *result;
    int len = 0;

    len = get_nbr(nbr);
    result = malloc(sizeof(char) * (len + 1));

    if (!result)
    {
        return "\n";
    }

    result[len] = '\0';

    if (nbr < 0)
        result[0] = '-';

    if (nbr == 0)
    {
        return "0";
    }

    while(nbr != 0)
    {
        len --;
        result[len] = nbr_convert(nbr % 10) + '0';
        nbr = nbr / 10;
    }
    return result;
}

#include <stdio.h>

void main(int argc, char **argv)
{
    printf("%s",itoa(0));
}