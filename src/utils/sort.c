#include "../includes/push_swap.h"

int is_sorted(t_list **stack)
{
    t_list *tmp;

    tmp = *stack;  
    while (tmp->next)
    {
        if (tmp->rep > tmp->next->rep)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

void	bubble_sort(int	*arr, int size)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

void get_element_to_top(t_list **stack_a, int idx, int value, int flag_a)
{
    if (idx <= stack_size(*stack_a) / 2)
    {
        while ((*stack_a)->rep != value)
        {
            if(flag_a)
                ra(stack_a, 1);
            else
                rb(stack_a, 1);
        }
    }
    else
    {
        while ((*stack_a)->rep != value)
        {
            if(flag_a)
                rra(stack_a, 1);
            else
                rrb(stack_a, 1);
        }
    }
}