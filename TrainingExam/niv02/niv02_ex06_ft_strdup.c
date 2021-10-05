/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv02_ex06_ft_strdup.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:48:46 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/23 10:01:30 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *src)
{
	int i = 0;

	while(src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		src_len;
	int		i;

	src_len = ft_strlen(src);
	dest = malloc(sizeof(char*) * (src_len + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
