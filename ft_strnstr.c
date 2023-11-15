/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:34:39 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 13:40:30 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[i])
	{
		while (i + j < len && big[i + j])
		{
			if (little[j] == big[i + j])
				j++;
			else if (little[j] == '\0')
				return ((char *)big + i);
			else
			{
				i++;
				j = 0;
			}
		}
		if (!little[j])
			return ((char *)big + i);
		return (NULL);
	}
	return ((char *)big);
}
/*#include <stdio.h>

int	main(void)
{
	char	foin[] = "coucou c'est Totolecoto";
	char	epine[] = "le";

	printf("%s\n", ft_strnstr(foin, epine, 24));
	return (0);
}*/
