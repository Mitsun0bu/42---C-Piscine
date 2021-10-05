/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv01_ex07_rev_print.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 22:21:01 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/23 22:55:32 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	int len;

	if (ac == 2)
	{
		len = ft_strlen(av[1]) - 1;
		while(av[1][len] != av[1][-1])
		{
			write(1, &av[1][len], 1);
			len --;
		}
	}
	write(1, "\n", 1);
	return (0);
}
