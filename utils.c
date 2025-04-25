#include "push_swap.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	print_op(const char *op)
{
	write(1, op, ft_strlen(op));
	write(1, "\n", 1);
}

int	parse_int(const char *str, int *out)
{
	long	n;
	int		s;

	n = 0;
	s = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (0);
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		if ((s == 1 && n > 2147483647) || (s == -1 && n > 2147483648))
			return (0);
		str++;
	}
	if (*str)
		return (0);
	*out = (int)(n * s);
	return (1);
}

// Converts the input from strings into integers
// Checks for invalid input (letters, symbols)

void	bubble_sort(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
