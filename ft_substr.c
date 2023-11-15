/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 10:56:44 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 14:14:59 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		res = malloc((ft_strlen(s + start) + 1) * sizeof(char));
	else
		res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	while (s[start] && i < len)
	{
		res[i] = s[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	char	tab[] = "Nathalie est un petit monstre";
	char	*res;

	res = ft_substr(tab, 4, 29);
	printf("%s\n", res);
	free(res);
	return (0);
}*/
