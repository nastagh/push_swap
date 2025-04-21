#include "../push_swap.h"

void	sa(t_stack *a)
{
	swap(a);
	print_op("sa");
}

void	sb(t_stack *b)
{
	swap(b);
	print_op("sb");
}

void	ss(t_stack *a, t_stack *b)
{
	swap(a);
	swap(b);
	print_op("ss");
}
