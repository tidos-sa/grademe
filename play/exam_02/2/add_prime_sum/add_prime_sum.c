#include <unistd.h>

void put_char(char c)
{
    write(1, &c, 1);
}
void put_string(char *str)
{
    int i  = 0;
    while(str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
    put_char('\n');
}
void put_number(int nb)
{
    if (nb >= 10)
        put_number(nb / 10);
    put_char( '0' + (nb % 10));
}

int atoi(char *str)
{
    int sinal = 1;
    int result = 0;
    int i = 0;

    if (str[i] == '-')
    {
        sinal = -1;
        i++;
    }

    while(str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            result = result * 10 + (str[i] - '0');
        }
        i++;
    }

    return sinal * result;
}


int is_primo(int n)
{
    int i = 2;
    while(i < n)
    {
        if (n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int sum_primo(int n)
{
    int i = 0;
    int soma = 0;

    while(i < n)
    {
        if(is_primo(n) == 1)
            soma += i;
        i++;
    }

    return soma;
}

void main(int argc, char **argv)
{
    int num_primo = 0;
    num_primo = atoi(argv[1]);
    put_number(sum_primo(num_primo));
}