/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableaux_pointeurs.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llethuil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 11:59:13 by llethuil          #+#    #+#             */
/*   Updated: 2021/09/16 13:19:15 by llethuil         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	char *tab;
	char *pointeur;

	tab = "HELLO";
	pointeur = tab;

	printf("contenu du tableau pointe par 'tab' : %s\n", tab);
	printf("adresse du pointeur 'tab' : %p\n", &tab);
	printf("adresse contenue dans le pointeur 'tableau' : %p\n", tab);
	printf("adresse contenue dans le pointeur 'pointeur' : %p\n", pointeur);
	printf("contenu du tableau pointe par 'pointeur' : %s\n", pointeur);
	return (0);
}
