int sqrt(int nb)
{
    int i;

    i = 0;
    while (i * i <= nb)
        i++;
    return (i);
}

int log(int nb)
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