/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:47:38 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 18:50:12 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_rev_rot(t_list **stack)
{
	t_list	*p;
	t_list	*last;

	if (stack && *stack)
	{
		p = *stack;
		last = NULL;
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

void	rra(t_list **stack_a, int flag)
{
	op_rev_rot(stack_a);
	if (flag)
		write (1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int flag)
{
	op_rev_rot(stack_b);
	if (flag)
		write (1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b, int flag)
{
	op_rev_rot(stack_a);
	op_rev_rot(stack_b);
	if (flag)
		write (1, "rrr\n", 4);
}
