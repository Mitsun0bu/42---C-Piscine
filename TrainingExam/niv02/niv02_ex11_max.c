/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv02_ex11_max.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 14:27:18 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/23 09:48:15 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = 0;

	if (!tab[i])
		return (0);
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main (void)
{
	int tab[50] = {1, 3, 100, 5, 7, 50, 2, 4};
	printf("%d\n", max(tab,7));
}
