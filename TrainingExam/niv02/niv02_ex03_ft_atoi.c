/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv02_ex03_ft_atoi.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 22:35:51 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/24 00:00:57 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi (const char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i ++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **argv)
{
	printf("argument 1 : %s\n", argv[1]);
	printf("argument 1 after atoi : %d\n", atoi(argv[1]));
	printf("argument 1 after ft_atoi :%d\n", ft_atoi(argv[1]));
}
*/
