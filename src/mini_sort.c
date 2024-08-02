/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:51:39 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 18:53:11 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->rep > ((*stack_a)->next)->rep)
		sa(stack_a, 1);
}

void	sort_three(t_list **stack_a)
{
	int		max_idx;
	t_list	*max;

	max = max_node(stack_a, &max_idx);
	(void)max;
	if (max_idx == 0)
	{
		ra(stack_a, 1);
		if ((*stack_a)->rep > ((*stack_a)->next)->rep)
			sa(stack_a, 1);
	}
	else if (max_idx == 1)
	{
		rra(stack_a, 1);
		if ((*stack_a)->rep > ((*stack_a)->next)->rep)
			sa(stack_a, 1);
	}
	else if (max_idx == 2)
	{
		if ((*stack_a)->rep > ((*stack_a)->next)->rep)
			sa(stack_a, 1);
	}
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	int		min_idx;
	t_list	*min_ptr;

	min_ptr = min_node(stack_a, &min_idx);
	get_element_to_top(stack_a, min_idx, min_ptr -> rep, 1);
	pb(stack_a, stack_b, 1);
	sort_three(stack_a);
	pa(stack_a, stack_b, 1);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int		min_idx;
	t_list	*min_ptr;

	min_ptr = min_node(stack_a, &min_idx);
	get_element_to_top(stack_a, min_idx, min_ptr -> rep, 1);
	pb(stack_a, stack_b, 1);
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b, 1);
}
