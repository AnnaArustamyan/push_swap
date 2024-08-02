/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:25:22 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 18:45:42 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	op_swap(t_list **stack)
{
	int	temp;

	if (!(*stack) || !stack || !((*stack)->next))
		return ;
	if (*stack && (*stack)->next)
	{
		temp = (*stack)->data;
		(*stack)->data = (*stack)->next->data;
		(*stack)->next->data = temp;
		temp = (*stack)->rep;
		(*stack)->rep = (*stack)->next->rep;
		(*stack)->next->rep = temp;
	}
}

void	sa(t_list **stack_a, int flag)
{
	op_swap(stack_a);
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_list **stack_b, int flag)
{
	op_swap(stack_b);
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b, int flag)
{
	op_swap(stack_a);
	op_swap(stack_b);
	if (flag)
		write(1, "ss\n", 3);
}
