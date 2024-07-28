#include "../includes/push_swap.h"

t_list  *min_node(t_list **stack_a, int *min_idx)
{
    t_list *p;
    t_list *min;
    int i;

    p = *stack_a;
    min = p;
    i = 0;
    *min_idx = i;
    while (p)
    {
        if (p->rep < min->rep)
        {
            min = p;
            *min_idx = i;
        }
        p = p->next;
        i++;
    }
    return (min);
}

t_list *max_node(t_list **stack_a, int *max_idx)
{
    t_list *p;
    t_list *max;
    int i;

    p = *stack_a;
    max = p;
    i = 0;
    *max_idx = i;
    while (p)
    {
        if (p->rep > max->rep)
        {
            max = p;
            *max_idx = i;
        }
        p = p->next;
        i++;
    }
    return (max);
}


int min_idx(t_list **stack_a)
{
    t_list *p;
    int min;
    int i;

    p = *stack_a;
    min = p->rep;
    i = 0;
    while (p)
    {
        if (p->rep < min)
        {
            min = p->rep;
            i++;
        }
        p = p->next;
    }
    return (i);
}

int max_idx(t_list **stack_a)
{
    t_list *p;
    int max;
    int i;

    p = *stack_a;
    max = p->rep;
    i = 0;
    while (p)
    {
        if (p->rep > max)
        {
            max = p->rep;
            i++;
        }
        p = p->next;
    }
    return (i);
}

