/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:11:36 by thsion            #+#    #+#             */
/*   Updated: 2023/10/19 15:42:56 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen((char *)src));
}
/*#include <stdio.h>

int	main(void)
{
	char	test[] = "Salut ";
	char	test1[] = "les connards";

	printf("%s\n", test);
	printf("%zu\n", ft_strlcpy(test, test1, 4));
	printf("%s\n", test);
	return (0);
}*/
