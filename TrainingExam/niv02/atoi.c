/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:38:40 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/24 00:00:54 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int			nbr = 0;
	int			i = 0;
	int			sign = 1;

	while(str[i] <= 32)
		i++;
	if(str[i] == '-')
	{
		sign = sign * -1;
		i ++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] && '0' <= str[i] && str[i] <= '9')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	return (nbr * sign);
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **argv)
{
	(void)ac;
	printf("argument 1 : %s\n", argv[1]);
	printf("argument 1 after atoi : %d\n", atoi(argv[1]));
	printf("argument 1 after ft_atoi :%d\n", ft_atoi(argv[1]));
}

