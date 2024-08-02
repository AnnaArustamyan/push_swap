/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:50:33 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 18:51:17 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_push(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = NULL;
	if (stack_b && (*stack_b))
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
}

void	pa(t_list **stack_a, t_list **stack_b, int flag)
{
	op_push(stack_a, stack_b);
	if (flag)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b, int flag)
{
	op_push(stack_b, stack_a);
	if (flag)
		write(1, "pb\n", 3);
}
