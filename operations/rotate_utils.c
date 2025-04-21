#include "../push_swap.h"

void	ra(t_stack *a)
{
	rotate(a);
	print_op("ra");
}

void	rb(t_stack *b)
{
	rotate(b);
	print_op("rb");
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a);
	rotate(b);
	print_op("rr");
}
