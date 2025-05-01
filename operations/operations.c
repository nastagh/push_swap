/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:00:22 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/26 15:00:23 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack *s)
{
	t_node	*first;
	t_node	*second;

	if (!s || s->size < 2)
		return ;
	first = s->top;
	second = first->next;
	first->next = second->next;
	second->next = first;
	s->top = second;
}

void	push(t_stack *from, t_stack *to)
{
	t_node	*tmp;

	if (!from || from->size == 0)
		return ;
	tmp = from->top;
	from->top = tmp->next;
	tmp->next = to->top;
	to->top = tmp;
	from->size--;
	to->size++;
}

void	rotate(t_stack *s)
{
	t_node	*first;
	t_node	*last;

	first = s->top;
	if (!s || s->size < 2)
		return ;
	first = s->top;
	last = s->top;
	s->top = first->next;
	while (last->next)
		last = last->next;
	last->next = first;
	first->next = NULL;
}

void	reverse_rotate(t_stack *s)
{
	t_node	*prev;
	t_node	*last;

	prev = NULL;
	if (!s || s->size < 2)
		return ;
	prev = NULL;
	last = s->top;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = s->top;
	s->top = last;
}
