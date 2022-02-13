/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:52 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/13 22:53:49 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	// char **process_matr(char **matrix)
	// {
	// 	matrix[4][4];
	// 	int row;
	// 	int col;
		
	// 	row = 0;
	// 	col = 0;
		
		
	// }

void print_matrix(void)
{
	char matrix[4][4];
	// process_matr(matrix);
	int row;
	int col;
	
	row = 0;
	col = 0;
	while(row <= 3)
	{
		while(col <= 3)
		{
			matrix[row][col] = '0';
			write(1, &matrix[row][col], 1);
			if (col != 3)
				write(1, " ", 1);
			col++;
		}
		row++;
		col = 0;
		write(1, "\n", 1);
	}
}
