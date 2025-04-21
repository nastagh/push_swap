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
