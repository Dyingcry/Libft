/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:19:09 by thsion            #+#    #+#             */
/*   Updated: 2023/10/17 15:44:30 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*b;
	unsigned char	*c;

	if (!dest && !src)
		return (0);
	b = (unsigned char *)dest;
	c = (unsigned char *)src;
	if (b < c)
		while (n--)
			*b++ = *c++;
	else
	{
		b = b + n - 1;
		c = c + n - 1;
		while (n--)
			*b-- = *c--;
	}
	return (dest);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test[] = "001";
	char	test1[] = "111";
	char	test2[] = "001";
	char	test3[] = "111";

	printf("%s\n", test);
	ft_memmove(test, test1, 3);
	printf("%s\n\n", test);
	printf("%s\n", test2);
	memmove(test2, test3, 3);
	printf("%s\n", test2);
	return(0);
}*/
