/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:10:17 by asoler            #+#    #+#             */
/*   Updated: 2022/02/12 18:08:47 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int count(char *par)
{
	int i;

	i = 0;

	while (par[0] != '\0')
		i++;
	return(i);
}

char *matrix(char *parametros)
{
	if (count(parametros) == 16)
	{
		
	}
}

char *split_parameters(char *par)
{
	int size;
	int i;
	int index;
	char aux[17];
	aux[16] = '\0';
	size = count(par);
	index = 0;
	i = 0;

	while (par[i] = '\0')
	{
		if (i % 2 == 0 && i < 30) //30 é o tamanho da minha strig parametro comezando de 0
		{
			aux[index] = par[i];
			index++;
		}
		i++;
	}
	return[aux]
}


int	main(int argc, char *argv[])
{
	char parametros[17];

	parametros[17] = split_parameters(argv[argc - 1]);


	matrix(parametros)
}
