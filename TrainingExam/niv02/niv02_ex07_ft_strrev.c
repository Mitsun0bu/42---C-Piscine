/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   niv2_ex7.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 20:15:18 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/16 21:07:10 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	len = ft_strlen(str) - 1;
	while(i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return(str);
}

int main ()
{
	char str[30] = "CHAUSSURES";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
