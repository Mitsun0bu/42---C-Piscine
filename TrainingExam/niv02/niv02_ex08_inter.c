/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv02_ex08_inter.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:47:59 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/23 19:31:55 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_dub_itself (char *str, char c, int pos);
int check_dub_other (char *str, char c);

int	check_dub_itself (char *str, char c, int pos)
{
	int i;

	i = 0;
	while(i < pos)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int check_dub_other (char *str, char c)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		while (av[1][i])
		{
			if (check_dub_itself(av[1], av[1][i], i) == 0 && check_dub_other(av[2], av[1][i]) == 1)
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
