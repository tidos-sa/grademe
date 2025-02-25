#include <unistd.h>
#include <stdlib.h>


char *strdup(const char *s)
{
    char *copy;
    int i = 0;

    while(s[i] != '\0')
        i++;

    copy = malloc(sizeof (char) * (i + 1));
    if (copy == NULL)
        return NULL;
    
    i = 0;
    while(s[i])
    {
        copy[i] = s[i];
        i++;
    }

    return copy;
}

#include <stdio.h>

int main(void)
{
    printf("%s",strdup("opaaaaaa"));
}