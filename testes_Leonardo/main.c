/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lledo-da <lledo-da@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:06:16 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/13 08:52:37 by lledo-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_print_matrix(void);

void ft_treat_params(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	int 	counter;
	char	*ptr;
	
	ptr = &(*(*argv));
	printf("%p\n", ptr);
	printf("%c", *ptr);
	printf("%c", *(ptr + 1));
	printf("%c", *(ptr + 2));
	printf("%c", *(ptr + 3));
	printf("%c", *(ptr + 4));
	printf("%c", *(ptr + 5));
	printf("%c\n", *(ptr + 6));
	printf("%p\n", ptr + 1);
	printf("%p\n", ptr + 2);
	printf("%p\n", ptr + 3);
	printf("%p\n", ptr + 4);
	printf("%p\n", ptr + 5);
	printf("%p\n", ptr + 6);
	counter = 0;
	while(counter < argc)
	{
		write(1, &(*argv), 1);
		counter++;
	}
	
	return (0);
}