#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	if (!init_stack(&a, argc, argv) || has_duplicates(&a))
		return (error_exit(&a, NULL));
	init_stack_empty(&b);
	if (!is_sorted(&a))
		sort_stack(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}

// Create 2 stacks: a and b
// Read the numbers from command-line input
// Fill stack a with those numbers
// Check for duplicates or invalid input
// If everything is OK and not already sorted:
// Call the sorting function
