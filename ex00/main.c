/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:10:17 by asoler            #+#    #+#             */
/*   Updated: 2022/02/12 22:35:00 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// int count(char *par)
// {
// 	int i;

// 	i = 0;

// 	while (par[0] != '\0')
// 		i++;
// 	return(i);
// }

char *matrix(char *parametros)
{
	int row;
	int col;
	int size;
	
	size = count(parametros);

	row = 0;
	if (size == 16)
	{
		parametros[4][4] = {{1, 2, 3, 4},{2, 3, 4, 1},{3, 4, 1, 2},{4, 1, 2, 3}};
	
	while (row <=  3)
	{
		col = 0;
		while (col <= 3)
		{
			write(1, &matr[row][col], 1);
			col++;
		}
		row++;
	}
}

char *split_parameters(char *par)
{
	int i;
	int index;
	char aux[17];
	aux[16] = '\0';
	index = 0;
	i = 0;

	while (par[i] != '\0')
	{
		if (i % 2 == 0 && i < 30) //30 é o tamanho da minha strig parametro comezando de 0
		{
			aux[index] = par[i];
			index++;
		}
		i++;
	}
	par = aux;
	return(par);
}


int	main(int argc, char *argv[])
{
	char dest[4][4];
	char *array_processado;
	array_processado = processamento_de_parametro(dest, argv[argc - 1]);
	matrix(array_processado);
	// char *parameters;
	// char *matriz;

	// parameters = split_parameters(argv[argc - 1]);

	// matriz = matrix(parametros);
	// printf("%s", parameters)
}
