/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:47:49 by thsion            #+#    #+#             */
/*   Updated: 2023/10/19 15:44:41 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		if (str[i] == (unsigned char)c)
			return (((unsigned char *)str) + i);
		i++;
		n--;
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	tab[] = "allo";

	printf("%p/n", ft_memchr(tab, 2, 4));
	printf("%p/n", memchr(tab, 2, 4));
	return (0);
}*/
