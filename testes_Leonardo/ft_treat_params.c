/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lledo-da <lledo-da@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:25:57 by lledo-da          #+#    #+#             */
/*   Updated: 2022/02/12 23:34:15 by lledo-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_treat_params(int argc, char *argv[])
{
	int counter;

	counter = 0;
	while(counter < argc)
	{
		write(1, "Hello", 5);
	}
}