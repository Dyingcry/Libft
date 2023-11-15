/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:02:45 by thsion            #+#    #+#             */
/*   Updated: 2023/10/19 15:43:25 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	res = malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = (*f)((unsigned int) i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*#include <stdio.h>

char	fttoupper(unsigned int n, char c)
{
	(void)n;
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
int	main(void)
{
	char	tab[] = "oui";
	char	*res;

	res = ft_strmapi(tab, fttoupper);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
