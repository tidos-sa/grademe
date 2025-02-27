#include <stdlib.h>

int sizelen(int nb, int nbb)
{
    if (nb > nbb)
        return (nb - nbb +1);
    else
        return (nbb - nb +1);
}

int     *ft_range(int start, int end)
{
    int i = 0;
    int size = sizelen(start,end);
    int *array;

    array = malloc(sizeof(int) * size);

    if (!array)
        NULL;

    if(start > end)
    {
        while(start >= end)
        {
            array[i] = start;
            start--;
            i++;
        }
    }
    if(start < end)
    {
        while(start <= end)
        {
            array[i] = start;
            start++;
            i++;
        }
    }

    return array;
}

#include <stdio.h>

int main(void)
{
    int size = sizelen(-1,5);
    int *array = ft_range(-1,5);
    int i = 0;

    while(i < size)
    {
        printf("%i ",array[i]);
        i++;
    }

    return 0;
}
