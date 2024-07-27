#include "../includes/push_swap.h"

void	exit_error(t_list **stack_a, t_list **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}

void		free_stack(t_list **stack)
{
	t_list	*p;
	if (!stack || !*stack)
		return ;
	while(*stack)
	{
		p = *stack;
		*stack = (*stack) -> next;
		free(p);
	}
	stack = NULL;
}