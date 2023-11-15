/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:51:31 by thsion            #+#    #+#             */
/*   Updated: 2023/10/12 13:38:18 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < (int) n)
	{
		((char *) dest)[i] = ((char *) src)[i];
		i++;
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
	ft_memcpy(test, test1, 3);
	printf("%s\n\n", test);
	printf("%s\n", test2);
	memcpy(test2, test3, 3);
	printf("%s\n", test2);
	return(0);
}*/
