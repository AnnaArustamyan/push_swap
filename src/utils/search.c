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

