/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:00:41 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/26 15:00:42 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_chunks_to_b(t_stack *a, t_stack *b, int chunk)
{
	int	i;
	int	pushed;
	int	total;

	i = 0;
	pushed = 0;
	total = a->size;
	while (pushed < total)
	{
		if (a->top->index <= i)
			push_and_rotate(a, b, &i, &pushed);
		else if (a->top->index <= i + chunk)
		{
			pb(a, b);
			i++;
			pushed++;
		}
		else
			ra(a);
	}
}

static void	push_back_to_a(t_stack *a, t_stack *b)
{
	int	max;

	while (b->size > 0)
	{
		max = get_max_index(b);
		if (b->top->index == max)
		{
			pa(a, b);
		}
		else
		{
			if (find_position(b, max) <= b->size / 2)
			{
				rb(b);
			}
			else
			{
				rrb(b);
			}
		}
	}
}

void	sort_big(t_stack *a, t_stack *b)
{
	int	chunk;

	chunk = get_chunk_size(a->size);
	push_chunks_to_b(a, b, chunk);
	push_back_to_a(a, b);
}
