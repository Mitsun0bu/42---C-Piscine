/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv01_ex09_rotone.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 10:15:32 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/17 10:42:26 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void ft_rotone(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ('A' <= str[i] && str[i] <= 'Y')
			str[i] = str[i] + 1;
		else if ('a' <= str[i] && str[i] <= 'y')
			str[i] = str[i] + 1;
		else if (str[i] == 'Z')
			str[i] = 'A';
		else if (str[i] == 'z')
			str[i] = 'a';
		i++;
	}
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_rotone(av[1]);
		ft_putstr(av[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
