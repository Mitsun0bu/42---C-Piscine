/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv01_ex06_repeat_alpha.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 12:11:24 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/17 14:14:50 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i;
		int i_in_alpha;
		int j;

		i = 0;
		i_in_alpha = 0;
		while(av[1][i])
		{
			j = 0;
			if ('A' <= av[1][i] && av[1][i] <= 'Z')
			{
				i_in_alpha = av[1][i] - 'A';
				while(j <= i_in_alpha)
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			else if ('a' <= av[1][i] && av[1][i] <= 'z')
			{
				i_in_alpha = av[1][i] - 'a';
				while(j <= i_in_alpha)
				{
					write(1, &av[1][i], 1);
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

