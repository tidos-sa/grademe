#include <unistd.h>

void root_13(char *str)
{
    int i = 0;
    char c;

    while(str[i] != '\0')
    {
        if( str[i] >= 'a' && str[i] <= 'm' ||  str[i] >= 'A' && str[i] <= 'M')
        {
            c = str[i] + 13;
            write(1,&c,1);
            i++;
        }
        else if( str[i] >= 'n' && str[i] <= 'z' ||  str[i] >= 'N' && str[i] >= 'Z')
        {
            c = str[i] - 13;
            write(1,&c,1);
            i++;
        }
        else
        {
            write(1,&str[i],1);
            i++;
        }
    }
}

int main(int agrc, char **argv)
{
    root_13(argv[1]);
}