#include <unistd.h>
#include <stdio.h>

void repeat_alfpha(char *str)
{
    int i = 0;
    int nbr;

    

    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            nbr = 1;
            nbr = (str[i] - 97);
            while(nbr >=0)
            {
                write(1,&str[i],1);
                nbr--;
            }
            i++;
        }

        else if ( str[i] >= 'A' && str[i] <= 'Z' )
        {
            int nbr2 = 1;
            nbr2 = (str[i] - 62);
            while(nbr2 >= 0)
            {
                write(1,&str[i],1);
                nbr2--;
            }
            i++;
        }

        else
        {
            write(1,&str[i],1);
            i++;
        }
    }
    if(str[i] == '\0')
    {
        write(1,"\n",1);
    }
    
}

int main(int argc,char **argv)
{
    if (argc < 2)
    {
        write(1,"\n",1);
    }
    else if(argc >= 3)
    {
        write(1,"\n",1);
    }
    else
    {
        repeat_alfpha(argv[1]);
    }    
}