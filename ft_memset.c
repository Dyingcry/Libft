/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:16:37 by dyingcry          #+#    #+#             */
/*   Updated: 2023/10/12 13:38:34 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*b;

	b = (char *) s;
	while (n--)
	{
		*b++ = c;
	}
	return (s);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	test[] = "000";
	char	test1[] = "000";

	printf("%s\n", test);
	ft_memset(test, 97, 3);
	printf("%s\n\n", test);
	printf("%s\n", test1);
	memset(test1, 97, 3);
	printf("%s\n", test1);
	return(0);
}*/
