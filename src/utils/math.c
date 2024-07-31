#include "../../includes/push_swap.h"

int my_sqrt(int nb)
{
    int i;

    i = 0;
    while (i * i <= nb)
        i++;
    return (i);
}

int my_log(int nb)
{
    int i;

    i = 0;
    while (nb > 1)
    {
        nb /= 2;
        i++;
    }
    return (i);
}  