
#include <unistd.h>

int main(int argc, char **argv)
{

    if (argc != 2)
    {
        write(1, "\n", 1);
        return 0;
    }

    //char argv[1][i][] = "Les stagiaires du staff ne sentent pas toujours tres bon.";
    int i  = 0;
    while(argv[1][i] != '\0')
    {
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            if (argv[1][i] == 'z')
                argv[1][i] = 'a';
            else
                argv[1][i] = argv[1][i] + 1;
        }
        else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
        {
            if (argv[1][i] == 'Z')
                argv[1][i] = 'A';
            else
                argv[1][i] = argv[1][i] + 1;
        }
            

        write(1,&argv[1][i],1);
        i++;
    }
    return 0;
}