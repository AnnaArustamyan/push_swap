#include "../includes/push_swap.h"

void create_sort_arr_assign_rep (t_list **stack_a)
{
    int *arr;
    int size;
    int i;
    t_list *p;

    size = stack_size(*stack_a);
    arr = (int *)malloc(sizeof(int) * size);
    if (!arr)
        return ;
    p = *stack_a;
    i = 0;
    while (p)
    {
        arr[i] = p->data;
        p = p->next;
        i++;
    }
    bubble_sort(arr, size);
    assign_rep(stack_a, arr);
    free(arr);
}

void assign_rep(t_list **stack_a, int *arr)
{
    t_list *p;
    int i;
    int size;

    size = stack_size(*stack_a);
    p = *stack_a;
    i = 0;
    while (p)
    {
        i = 0;
        while (i < size)
        {
            if (p->data == arr[i])
            {
                p->rep = i;
                break;
            }
            i++;
        }
        p = p->next;
    }
}

void butterfly_sort(t_list **stack_a, t_list **stack_b, int len)
{
    int n;
    int i;
    
    n = my_sqrt(len)+ my_log(len);
    i = 0; 
    while(stack_size(*stack_a) > 0 && i < len)
    {
        if((*stack_a) -> rep <= i)
        {
            pb(stack_a, stack_b, 1);
            rb(stack_b, 1);
            i++;
        }
        else if((*stack_a) -> rep <= i + n)
        {
            pb(stack_a, stack_b, 1);
            i++;
        }
        else
            ra(stack_a, 1);
        if (n + i >= len)
		    i--;
    }
    while(stack_size(*stack_b) > 0)
    {
        int max_idx;
        t_list *max;

        max = max_node(stack_b, &max_idx);
        get_element_to_top(stack_b, max_idx, max->rep, 0);
        pa(stack_a, stack_b, 1);
    }
}