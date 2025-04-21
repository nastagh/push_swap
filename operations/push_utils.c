#include "../push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	push(b, a);
	print_op("pa");
}

void	pb(t_stack *a, t_stack *b)
{
	push(a, b);
	print_op("pb");
}
