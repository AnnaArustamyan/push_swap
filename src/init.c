/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:56:06 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 19:11:08 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*stack_init(int ac, char **av)
{
	t_list		*stack_a;
	int			i;

	if (!validate(av))
		exit_error(NULL, NULL);
	stack_a = NULL;
	i = 1;
	while (i < ac)
	{
		fill_stack_values(av[i], &stack_a);
		i++;
	}
	check_doubles(&stack_a);
	return (stack_a);
}

void	fill_stack_values(char *str, t_list **stack_a)
{
	char		*p;
	long int	nbr;
	int			len;

	while (*str)
	{
		while (*str == ' ')
			str++;
		p = str;
		len = 0;
		while (*str == '0' && str[1] == '0')
			str++;
		while (*str && *str != ' ')
		{
			len++;
			str++;
		}
		if (len > 0)
		{
			nbr = ft_atoi(p);
			if (len > 11 || nbr > 2147483647 || nbr < -2147483648)
				exit_error(stack_a, NULL);
			ft_lstadd_back(stack_a, (int)nbr);
		}
	}
}

void	check_doubles(t_list **stack_a)
{
	t_list	*current;
	t_list	*tmp;

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
