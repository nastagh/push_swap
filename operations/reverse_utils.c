#include "../push_swap.h"

void	rra(t_stack *a)
{
	reverse_rotate(a);
	print_op("rra");
}

void	rrb(t_stack *b)
{
	reverse_rotate(b);
	print_op("rrb");
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a);
	reverse_rotate(b);
	print_op("rrr");
}
