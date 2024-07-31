#include "../includes/push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	
	stack_b = NULL;
	if (ac < 2)
		return (0);
	stack_a = stack_init(ac, av);
    // size = stack_size(stack_a);
	// print_stack(stack_a);
	// printf("\n");

	// create_sort_arr_assign_rep(&stack_a);
	// print_stack(stack_a);
	// printf("\n");
	// //push_swap(&stack_a, &stack_b);

	// butterfly_sort(&stack_a, &stack_b, size);
	// print_stack(stack_a);
	push_swap(&stack_a, &stack_b);
	system("leaks push_swap");
	return (0);
}