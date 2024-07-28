void op_rotate(t_list **stack)
{
    if (*stack != NULL || stack != NULL)
    {
        t_list *last = *stack;
        while (last->next != NULL)
            last = last->next;
        last->next = *stack;
        *stack = (*stack)->next;
        last->next->next = NULL;
    }
}

void ra(t_list **stack_a, int flag)
{
    op_rotate(stack_a);
    if(flag)
        write(1, "ra\n", 3);
}

void rb(t_list **stack_b, int flag)
{
    op_rotate(stack_b);
    if(flag)
        write(1, "rb\n", 3);
}

void ra(t_list **stack_a, t_list **stack_b, int flag)
{
    op_rotate(stack_a);
    op_rotate(stack_b);
    if(flag)
        write(1, "rr\n", 3);
}