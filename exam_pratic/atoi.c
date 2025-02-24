int atoi(char *str)
{
    int sinal = 1;
    int  result = 0;
    int i = 0;

    if(str[i] == '-')
    {
        sinal = -1;
        i++;
    }
    while(str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
        i++;
    }
    return result * sinal;
}

#include <stdio.h>
void main(void)
{
    printf("%i",atoi("-- - 123"));
}