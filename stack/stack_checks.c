/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_checks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:00:55 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/30 13:54:17 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	init_stack_empty(t_stack *stack)
{
	stack->top = NULL;
	stack->size = 0;
}

void	free_stack(t_stack *stack)
{
	t_node	*tmp;

	while (stack->top)
	{
		tmp = stack->top;
		stack->top = stack->top->next;
		free(tmp);
	}
	stack->size = 0;
}

int	is_sorted(t_stack *stack)
{
	t_node	*cur;

	cur = stack->top;
	while (cur && cur->next)
	{
		if (cur->index > cur->next->index)
			return (0);
		cur = cur->next;
	}
	return (1);
}

int	has_duplicates(t_stack *stack)
{
	t_node	*a;
	t_node	*b;

	a = stack->top;
	while (a)
	{
		b = a->next;
		while (b)
		{
			if (a->value == b->value)
				return (1);
			b = b->next;
		}
		a = a->next;
	}
	return (0);
}

int	error_exit(t_stack *a, t_stack *b)
{
	if (a)
		free_stack(a);
	if (b)
		free_stack(b);
	write(2, "Error\n", 6);
	return (1);
}
