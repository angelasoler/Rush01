/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoler <asoler@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:16 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/13 22:38:31 by asoler           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void print_matrix(int size);
#include <stdio.h>
#include <unistd.h>

char *split(char *aux, char *s)
{
	int i;
	int index;
	i = 0;
	index = 0;

	while (i <= 30)
	{
		if (i % 2 == 0)
		{
			aux[index] = s[i];
			index++;
		}
		i++;
	}
	aux[index] = '\0';
	return (aux);
}

int count(char *s)
{
	int i = 1;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *split(char *aux, char *s);
void print_matrix(void);

int main(int argc, char *argv[])
{
	char	char_pro[17];
	int		n;
	char *error;

	error = "Error\n";

	n = count(argv[argc - 1]);
	
	if (n < 31 || n > 31)
		write(1, error, 6);
	else
	{
		split(char_pro, argv[argc - 1]);
		print_matrix();
	}
}
