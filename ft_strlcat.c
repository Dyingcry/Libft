/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:08:52 by thsion            #+#    #+#             */
/*   Updated: 2023/10/19 15:46:31 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ssrc;
	unsigned int	sdst;

	ssrc = ft_strlen((char *)src);
	if (size <= 0)
		return (ssrc);
	sdst = ft_strlen(dst);
	i = sdst;
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (size < sdst)
		return (ssrc + size);
	return (sdst + ssrc);
}
/*#include <stdio.h>

int	main(void)
{
	char	test[] = "Salut ";
	char	test1[] = "les connards";

	printf("%zu\n", ft_strlcat(test, test1, 3));
	return (0);
}*/
