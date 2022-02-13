/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:52 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/13 21:34:13 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_matrix();
//[TODO]
// char *retorna uma array inicializado q vamos modificar para printar numeros de 1 a 4
// usar uma funçãmo maloqui para poder fazer uma matriz maior q 4.
// ou talves uma função auxiliar recursiva para converter char en int
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
