/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:52 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/14 02:10:01 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_matrix(int size)
{
	char matrix[size][size];
	int row;
	int col;
	
	row = 0;
	col = 0;
	while(row <= (size - 1))
	{
		while(col <= (size - 1))
		{
			matrix[row][col] = 'x';
			write(1, &matrix[row][col], 1);
			if (col != (size - 1))
				write(1, " ", 1);
			col++;
		}
		row++;
		col = 0;
		write(1, "\n", 1);
	}
}
