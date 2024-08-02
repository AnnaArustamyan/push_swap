/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:46:01 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 18:47:01 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_rotate(t_list **stack)
{
	t_list	*last;

	if (*stack != NULL || stack != NULL)
	{
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		last->next = *stack;
		*stack = (*stack)->next;
		last->next->next = NULL;
	}
}

void	ra(t_list **stack_a, int flag)
{
	op_rotate(stack_a);
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_list **stack_b, int flag)
{
	op_rotate(stack_b);
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b, int flag)
{
	op_rotate(stack_a);
	op_rotate(stack_b);
	if (flag)
		write(1, "rr\n", 3);
}
