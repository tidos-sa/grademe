#include <unistd.h>

void ft_putstr(char c)
{
    write(1, &c, 1);
}

void ft_print(char *str)
{
    int i= 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
    ft_putstr('\n');
}



void ft_putnbr(int n){

    char c;
   
    if (n >= 10)
    {
        ft_putstr('0'+ (n/10));
        ft_putstr('0'+ (n%10));
    }
    else
    {
        ft_putstr('0' + n);
    }

    ft_putstr('\n');
}

void fizzbuzz(void)
{
    int i = 1;

    while(i <= 100){
        if(i % 15 == 0)
        {
            ft_print("fizzbuzz");
        }
        else if(i % 5 == 0)
        {
            ft_print("buzz");
        }
        else if(i % 3 == 0)
        {
            ft_print("fizz");
        }
        else
        {
            ft_putnbr(i);
        }
        
        i++;
    }
   
}

int main(void)
{
    fizzbuzz();
}