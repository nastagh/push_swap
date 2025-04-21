#include "../push_swap.h"

int	find_position(t_stack *s, int index)
{
	t_node	*cur;
	int		pos;

	cur = s->top;
	pos = 0;
	while (cur)
	{
		if (cur->index == index)
		{
			return (pos);
		}
		cur = cur->next;
		pos++;
	}
	return (-1);
}

int	get_max_index(t_stack *b)
{
	t_node	*cur;
	int		max;

	cur = b->top;
	max = cur->index;
	while (cur)
	{
		if (cur->index > max)
		{
			max = cur->index;
		}
		cur = cur->next;
	}
	return (max);
}

int	get_chunk_size(int size)
{
	int	chunk;

	chunk = 0;
	if (size <= 100)
	{
		chunk = 15;
	}
	else
	{
		chunk = 30;
	}
	return (chunk);
}

void	push_and_rotate(t_stack *a, t_stack *b, int *i, int *pushed)
{
	pb(a, b);
	rb(b);
	(*i)++;
	(*pushed)++;
}
