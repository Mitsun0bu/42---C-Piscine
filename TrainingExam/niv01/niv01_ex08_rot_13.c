/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv1_ex13.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 18:03:12 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/16 20:11:36 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if ('A' <= av[1][i]  && av[1][i] <= 'M')
				av[1][i] += 13;
			else if ('N' <= av[1][i] && av[1][i] <= 'Z')
				av[1][i] -= 13;
			else if ('a' <= av[1][i] && av[1][i] <= 'm')
				av[1][i] += 13;
			else if ('n' <= av[1][i] && av[1][i] <= 'z')
				av[1][i] -= 13;
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
