#include "../push_swap.h"

static void	sort_three(t_stack *a)
{
	int	i;
	int	j;
	int	k;

	i = a->top->index;
	j = a->top->next->index;
	k = a->top->next->next->index;
	if (i > j && j < k && i < k)
		sa(a);
	else if (i > j && j > k)
	{
		sa(a);
		rra(a);
	}
	else if (i > j && j < k && i > k)
		ra(a);
	else if (i < j && j > k && i < k)
	{
		sa(a);
		ra(a);
	}
	else if (i < j && j > k && i > k)
		rra(a);
}

static int	find_min_position(t_stack *a, int min)
{
	t_node	*cur;
	int		pos;

	cur = a->top;
	pos = 0;
	while (cur)
	{
		if (cur->index == min)
			break ;
		pos++;
		cur = cur->next;
	}
	return (pos);
}

static void	rotate_min_to_top(t_stack *a, int pos)
{
	int	i;

	i = 0;
	if (pos <= a->size / 2)
	{
		while (i++ < pos)
			ra(a);
	}
	else
	{
		while (i++ < a->size - pos)
			rra(a);
	}
}

static void	push_min_to_b(t_stack *a, t_stack *b)
{
	int	min;
	int	pos;

	min = get_min_index(a);
	pos = find_min_position(a, min);
	rotate_min_to_top(a, pos);
	pb(a, b);
}

void	sort_small(t_stack *a, t_stack *b)
{
	if (a->size == 2 && !is_sorted(a))
		sa(a);
	else if (a->size == 3)
		sort_three(a);
	else if (a->size <= 5)
	{
		while (a->size > 3)
			push_min_to_b(a, b);
		sort_three(a);
		while (b->size > 0)
			pa(a, b);
	}
}
