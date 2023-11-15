/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:01:46 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 14:38:19 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1)
		return ((char *)s2);
	else if (!s2)
		return ((char *)s1);
	res = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		res[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		res[i++] = s2[j++];
	}
	res[i] = '\0';
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	char	test[] = "Salut";
	char	test1[] = "les connards";

	printf("%s\n", ft_strjoin(test, test1));
	return (0);
}*/
