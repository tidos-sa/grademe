#include <unistd.h>

// a ideia e percorer todos os caracteres de str dentro do strr, assim precisamos tter duas funcoes de controle i e j.
// quando o str == strr reseta o j e da i++; adicionando o caracter em uma nova string ou nao, e no final printa a string.

void inter(char *str , char *strr)
{
    int i = 0;
    int j = 0;

    while(str[i] != '\0')
    {
        int j = 0;
        while(strr[j] != '\0')
        {
            if (str[i] == strr[j]){
                write(1,&str[i],1);
                break;
            }
            j++;
        }
        i++;
    }
    write(1, "\n",1);
}


int main(int argc, char **argv)
{
    if(!argc)
    {
        write(1,"\n",1);
    }
    if(argc != 3)
    {
        write(1,"\n",1);
    }
    else
        inter(argv[1],argv[2]);
}