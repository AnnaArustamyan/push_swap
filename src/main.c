#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size;
	
	stack_b = NULL;
	if (ac < 2)
		return (0);
	if (!validate(av))
		exit_error(NULL, NULL);
	stack_a = stack_init(ac, av);
	//print_stack(stack_a);

	printf("\n");
	assign_indexes(&stack_a, create_sort_fill_arr(&stack_a));
	print_stack(stack_a);
	printf("\n");
	//push_swap(&stack_a, &stack_b, stack_size);
	sort_five(&stack_a, &stack_b);
	print_stack(stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	system("leaks push_swap");
	return (0);
}