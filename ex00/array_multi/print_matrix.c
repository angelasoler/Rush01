/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:52 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/14 01:48:25 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

	// 4 3 2 1
	// 1 2 2 2
	
	// 4 3 2 1 ezq
	// 1 2 2 2 dir
	// 0 -> 4 1 ->
	void process_matr(char matrix[4][4], char *arg)
	{
		int n;
		int x;
		int oposto;
		char q;

		x = 0;
		q = '0';
		n = 0;
		oposto = n + 4; //oposto
		while (n < 8)
		{
			if (arg[n] == '4' && arg[oposto] == '1')
			{
				while (x <= 3)
				{
					matrix[x][0] = q + 1;
					q++;
					x++;
				}
				x = 0;
				while (x <= 3)
				{
					matrix[x][1] = q - 3;
					q++;
					x++;
				}
				x = 0;
				while (x <= 3)
				{
					matrix[x][2] = q - 7;
					q++;
					x++;
				}
				x = 0;
							while (x <= 3)
				{
					matrix[x][3] = q - 11;
					q++;
					x++;
				}
				x = 0;
			}
			n++;
		}
	}

void print_matrix(char *arg)
{
	char matrix[4][4];
	process_matr(matrix, arg); //casting
	int row;
	int col;
	
	row = 0;
	col = 0;
	while(row <= 3)
	{
		while(col <= 3)
		{
			// matrix[row][col] = '0';
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
