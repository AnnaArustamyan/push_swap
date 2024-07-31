#include "../includes/push_swap.h"

void op_rev_rot(t_list **stack)
{
    if (stack && *stack)
    {
        t_list *p = *stack;
        t_list *last = NULL;

        while (p->next != NULL)
        {
            last = p;
            p = p->next;
        }

        p->next = *stack;
        *stack = p;

        if (last)
            last->next = NULL;
    }
}

void rra(t_list **stack_a,int flag)
{
    op_rev_rot(stack_a);
    if(flag)
        write(1,"rra\n",4);
}

void rrb(t_list **stack_b,int flag)
{
    op_rev_rot(stack_b);
    if(flag)
        write(1,"rrb\n",4);
}

void rrr(t_list **stack_a,t_list **stack_b,int flag)
{
    op_rev_rot(stack_a);
    op_rev_rot(stack_b);
    if(flag)
        write(1,"rrr\n",4);
}