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