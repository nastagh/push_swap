/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:01:04 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/30 15:57:16 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split && split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static int	handle_split_args(t_stack *a, char *input)
{
	char	**args;
	int		count;
	int		valid;

	args = ft_split(input, ' ');
	if (!args || !args[0])
	{
		free_split(args);
		return (0);
	}
	count = 0;
	while (args[count])
		count++;
	valid = init_stack(a, count, args);
	free_split(args);
	return (valid);
}

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	init_stack_empty(&a);
	init_stack_empty(&b);
	if (argc < 2)
		return (0);
	if ((argc == 2 && !handle_split_args(&a, argv[1])) || (argc > 2
			&& !init_stack(&a, argc - 1, argv + 1)))
		return (error_exit(NULL, NULL));
	if (has_duplicates(&a))
		return (error_exit(&a, NULL));
	if (!is_sorted(&a))
		sort_stack(&a, &b);
	if (a.top)
		free_stack(&a);
	if (b.top)
		free_stack(&b);
	return (0);
}

// Create 2 stacks: a and b
// Read the numbers from command-line input
// Fill stack a with those numbers
// Check for duplicates or invalid input
// If everything is OK and not already sorted:
// Call the sorting function
