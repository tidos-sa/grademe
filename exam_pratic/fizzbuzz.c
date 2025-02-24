#include <unistd.h>

void put_char(char c)
{
    write(1, &c, 1);
}

char put_string(char *str)
{
    int i = 0;
    while( str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
    put_char('\n');
}

void put_number(int i)
{

    if( i >= 10)
    {
        put_number( i / 10);
    }
    put_char('0'+(i % 10));
    
}

void fizzbuzz(int i)
{
    while(i <= 100)
    {
        if( i % 15 == 0)
            put_string("fizzbuzz");
        else if( i % 5 == 0)
            put_string("buzz");
        else if( i % 3 == 0)
            put_string("fizz");
        else
        {
            put_number(i);
            put_char('\n');
        }
            

        i++;
    }
}

/*while( i <= 100)
if i % 15 = 0 (fizz buz)
if i % 3 = 0 ( fizz )
if i % 5 = 0 ( buzz )
else ( put_number(i))
*/

int main(void)
{
    fizzbuzz(1);
}