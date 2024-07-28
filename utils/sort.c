#include "../includes/push_swap.h"

int is_sorted(t_list **stack)
{
    while((*stack) -> next)
    {
        if((*stack) -> data > ((*stack) -> next) -> data)
            return (0);
        (*stack) = (*stack) -> next;
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

void get_element_to_top(t_list **stack_a, int idx, int value)
{
    if (idx <= stack_size(*stack_a) / 2)
    {
        while ((*stack_a)->rep != value)
            ra(stack_a, 1);
    }
    else
    {
        while ((*stack_a)->rep != value)
            rra(stack_a, 1);
    }
}