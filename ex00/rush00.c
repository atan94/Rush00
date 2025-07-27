/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:38:45 by amtan             #+#    #+#             */
/*   Updated: 2025/07/27 14:24:30 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int last_col, char first_char, char mid_char, char last_char)
{
	int	current_col;

	current_col = 1;
	while (current_col <= last_col)
	{
		if (current_col == 1)
			ft_putchar(first_char);
		else if (current_col == last_col)
			ft_putchar(last_char);
		else
			ft_putchar(mid_char);
		current_col++;
	}
	ft_putchar('\n');
}

int	is_zero_or_negative(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "Error: Both x and y must be ", 28);
		write(2, "non-zero positive integers.\n", 28);
		return (1);
	}
	else
		return (0);
}

void	rush(int x, int y)
{
	int	current_row;
	int	last_col;
	int	last_row;

	if (is_zero_or_negative(x, y) == 1)
		return ;
	current_row = 1;
	last_col = x;
	last_row = y;
	while (current_row <= last_row)
	{
		if (current_row == 1)
			print_row(last_col, 'o', '-', 'o');
		else if (current_row == last_row)
			print_row(last_col, 'o', '-', 'o');
		else
			print_row(last_col, '|', ' ', '|');
		current_row++;
	}
}
