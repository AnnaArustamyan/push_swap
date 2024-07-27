#include "../includes/push_swap.h"

t_list	*stack_init(int ac, char **av)
{
	t_list		*stack_a;
	int			i;

	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		fill_stack_values(av[i], &stack_a);
		i++;
	}
	check_doubles(&stack_a);
	return(stack_a);
}

void fill_stack_values(char *str, t_list **stack_a)
{
	char		*p;
	long int	nbr;
	int 		len;

	while(*str)
	{
		while (*str == ' ')
			str++;
		p = str;
		len = 0;
		while(*str && *str != ' ')
		{
			len++;
			str++;
		}
		if(len > 0)
		{
			if(len > 11)
				return ;
			else if(ft_atoi(p) > 2147483647 || ft_atoi(p) < (-2147483648))
				return ;
			else
			{
				nbr = ft_atoi(p);
				ft_lstadd_back(stack_a, (int)nbr);
			}
		}
	}
}

void check_doubles(t_list **stack_a)
{
	t_list *current;
	t_list *tmp;

	if (!stack_a || !(*stack_a))
		exit_error(stack_a, NULL);
	current = *stack_a;
	while (current != NULL)
	{
		tmp = current->next;
		while (tmp != NULL)
		{
			if (tmp->data == current->data)
				exit_error(stack_a, NULL);
			tmp = tmp->next;
		}
		current = current->next;
	}
}