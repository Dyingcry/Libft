/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:33:27 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 13:16:53 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char s1, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	char			*res;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_set(s1[i], (char *)set) == 1)
		i++;
	if (i == ft_strlen((char *)s1))
		return (ft_strdup(""));
	while (is_set(s1[j], (char *)set) == 1)
		j--;
	res = malloc (sizeof(char) * (j - i + 2));
	if (!res)
		return (NULL);
	k = 0;
	while (i <= j)
	{
		res[k] = s1[i];
		i++;
		k++;
	}
	res[k] = '\0';
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	const char	test[] = "   Salut les connards   ";
	const char	set[] = "   ";

	printf("%s\n", ft_strtrim(test, set));
	return (0);
}*/
