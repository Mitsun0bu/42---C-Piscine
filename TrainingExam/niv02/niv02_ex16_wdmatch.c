/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv2_ex16.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 21:07:35 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/16 22:35:13 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int wdmatch (char *str1, char *str2)
{
	int i;
	int j;
	int check;

	i = 0;
	j = 0;
	check = 0;
	while(str2[j])
	{
		if(str2[j] == str1[i])
		{
			check++;
			i++;
		}
		j++;
	}
	if (check == ft_strlen(str1))
		return (1);
	else
		return (0);
}

int main (int ac, char **argv)
{
	if (ac == 3)
	{
		if (wdmatch(argv[1], argv[2]) == 1)
		{
			ft_putstr(argv[1]);
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}

	else
		write(1, "\n", 1);
	return (0);
}
