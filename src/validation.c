/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarustam < aarustam@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 18:25:02 by aarustam          #+#    #+#             */
/*   Updated: 2024/08/02 18:45:03 by aarustam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_syntax(char **str)
{
	char	*syntax_str;

	syntax_str = "0123456789+- ";
	while (*str)
	{
		if (consists_of(*str, syntax_str) == 0)
			return (0);
		str++;
	}
	return (1);
}

int	consists_of(char *str, char *syntax)
{
	int	i;
	int	j;
	int	found;

	i = 0;
	while (str[i])
	{
		j = 0;
		found = 0;
		while (syntax[j])
		{
			if (str[i] == syntax[j])
			{
				found = 1;
				break ;
			}
			j++;
		}
		if (!found)
			return (0);
		i++;
	}
	return (1);
}

int	validate_grammar(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (meets_conditions(&str[i][j], j) == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	meets_conditions(char *c, int index)
{
	if (*c == '+' || *c == '-')
	{
		if (!(c[1] <= '9' && c[1] >= '0'))
			return (0);
		else if (index > 0 && c[-1] != ' ')
			return (0);
		else if (c[1] == '\0')
			return (0);
		return (1);
	}
	else if (*c == ' ')
	{
		if (index > 0 && (c[-1] == '+' || c[-1] == '-'))
			return (0);
		return (1);
	}
	else if (*c >= '0' && *c <= '9')
	{
		if (c[1] == '+' || c[1] == '-')
			return (0);
		return (1);
	}
	return (0);
}

int	validate(char **argv)
{
	if (check_syntax(argv + 1) && validate_grammar(argv + 1))
		return (1);
	return (0);
}
