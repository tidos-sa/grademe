#include <unistd.h>
#include <stdio.h>


void ft_putchar(char c){
	write(1 , &c, 1);
}

char first_word(char *strr)
{
	int i = 0;
	while( strr[i] == ' ' )
	{
		i++;
	}
	while(strr[i] != '\0' && strr[i] != ' ')
	{
		ft_putchar(strr[i]);
		i++;
	}
	ft_putchar('\n');
}

int main(void)
{
	first_word(" opa ola");
}
