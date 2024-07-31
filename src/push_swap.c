#include "../includes/push_swap.h"

void push_swap( t_list **stack_a, t_list **stack_b)
{
    int size;

    create_sort_arr_assign_rep (stack_a);
    if (is_sorted(stack_a))
        return;
    size = stack_size(*stack_a);

    //print_stack(*stack_a);
    //printf("size: %d\n", size);
    if( size == 2)
        sort_two(stack_a);
    else if (size == 3)
        sort_three(stack_a);
    else if (size == 4)
        sort_four(stack_a, stack_b);
    else if (size == 5)
        sort_five(stack_a, stack_b);
    else if (size > 5)  
        butterfly_sort(stack_a, stack_b, size);
    //print_stack(*stack_a);
    free_stack(stack_a);
    free_stack(stack_b);
}