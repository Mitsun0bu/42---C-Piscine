/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv0_ex2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:01:14 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/23 21:19:40 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *argv)
{
	int i;

	i = 0;
	while(argv[i])
	{
		write(1, &argv[i], 1);
		i++;
	}
}

void aff_first_param(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc < 1)
	{
		write(1, "\n", 1);
	}
	else
	{
		ft_putstr(argv[argc-1]);
		write(1, "\n", 1);
	}
}

int main(int argc, char **argv)
{
	aff_first_param(argc, argv);
	return (0);
}

