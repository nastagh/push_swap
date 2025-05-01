/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amikhail <amikhail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:01:07 by amikhail          #+#    #+#             */
/*   Updated: 2025/04/30 12:48:21 by amikhail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*top;
	int				size;
}					t_stack;

// stack_utils.c
int					init_stack(t_stack *stack, int argc, char **argv);
void				init_stack_empty(t_stack *stack);
void				free_stack(t_stack *stack);
int					is_sorted(t_stack *stack);
int					has_duplicates(t_stack *stack);
int					error_exit(t_stack *a, t_stack *b);
void				set_indexes(t_stack *stack, int *arr);

// sort.c
void				sort_stack(t_stack *a, t_stack *b);

// sort_small.c
void				sort_small(t_stack *a, t_stack *b);

// sort_small_utils.c
int					get_min_index(t_stack *a);

// sort_big.c
void				sort_big(t_stack *a, t_stack *b);

// sort_big_utils.c
int					find_position(t_stack *s, int index);
int					get_max_index(t_stack *b);
int					get_chunk_size(int size);
void				push_and_rotate(t_stack *a, t_stack *b, int *i,
						int *pushed);

// operations.c
void				swap(t_stack *s);
void				push(t_stack *from, t_stack *to);
void				rotate(t_stack *s);
void				reverse_rotate(t_stack *s);

// swap_utils.c
void				sa(t_stack *a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);

// push_utils.c
void				pa(t_stack *a, t_stack *b);
void				pb(t_stack *a, t_stack *b);

// rotate_utils.c
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rr(t_stack *a, t_stack *b);

// reverse_utils.c
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);

// utils
size_t				ft_strlen(const char *str);
void				print_op(const char *op);
int					parse_int(const char *str, int *out);
void				bubble_sort(int *arr, int size);

#endif
