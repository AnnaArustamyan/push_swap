#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size;

	if (ac < 2)
		return (0);
	if (!validate(av))
		exit_error(NULL, NULL);
	printf("hey");
	stack_b = NULL;
	stack_a = stack_init(ac, av);
	
	//push_swap(&stack_a, &stack_b, stack_size);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}