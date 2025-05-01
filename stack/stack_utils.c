/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:00:58 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/30 13:58:11 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

static int	*copy_stack_to_array(t_stack *stack)
{
	int		*arr;
	t_node	*cur;
	int		i;

	arr = malloc(sizeof(int) * stack->size);
	if (!arr)
		return (NULL);
	cur = stack->top;
	i = 0;
	while (cur && i < stack->size)
	{
		arr[i] = cur->value;
		cur = cur->next;
		i++;
	}
	return (arr);
}

void	set_indexes(t_stack *stack, int *arr)
{
	t_node	*cur;
	int		j;

	cur = stack->top;
	while (cur)
	{
		j = 0;
		while (j < stack->size)
		{
			if (arr[j] == cur->value)
			{
				cur->index = j;
				break ;
			}
			j++;
		}
		cur = cur->next;
	}
}

static void	assign_indexes(t_stack *stack)
{
	int		*arr;
	t_node	*cur;
	int		j;

	arr = copy_stack_to_array(stack);
	if (!arr)
		return ;
	bubble_sort(arr, stack->size);
	cur = stack->top;
	while (cur)
	{
		j = 0;
		while (j < stack->size)
		{
			if (arr[j] == cur->value)
			{
				cur->index = j;
				break ;
			}
			j++;
		}
		cur = cur->next;
	}
	free(arr);
}
// create array from initial args
// sort array bubble_sort
// write index to t_node

int	init_stack(t_stack *stack, int argc, char **argv)
{
	int		i;
	int		value;
	t_node	*new;

	stack->top = NULL;
	stack->size = 0;
	i = argc - 1;
	while (i >= 0)
	{
		if (!parse_int(argv[i], &value))
			return (0);
		new = new_node(value);
		if (!new)
			return (0);
		new->next = stack->top;
		stack->top = new;
		stack->size++;
		i--;
	}
	assign_indexes(stack);
	return (1);
}
// Converts the input from strings into integers
// Checks for invalid input (letters, symbols)
// Creates a linked list of nodes (each holding a number)
// Also assigns each number an index — its position in the sorted array 
//(bubble sort)