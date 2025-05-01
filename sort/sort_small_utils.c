/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:00:44 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/26 15:00:45 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min_index(t_stack *a)
{
	t_node	*cur;
	int		min;

	cur = a->top;
	min = cur->index;
	while (cur)
	{
		if (cur->index < min)
			min = cur->index;
		cur = cur->next;
	}
	return (min);
}
