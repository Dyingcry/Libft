/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:19:48 by thsion            #+#    #+#             */
/*   Updated: 2023/10/19 13:48:05 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	while (s[++i])
		(*f)(i, s + i);
}
/*#include <stdio.h>

void	fttoupper(unsigned int n, char* c)
{
	int	i;

	i = 0;
	(void)n;
	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] = c[i] - 32;
}
int	main(void)
{
	char	tab[] = "oui";

	printf("%s\n", tab);
	ft_striteri(tab, fttoupper);
	printf("%s\n", tab);
	return (0);
}*/
