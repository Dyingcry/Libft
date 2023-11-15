/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:00 by thsion            #+#    #+#             */
/*   Updated: 2023/10/12 13:37:53 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*#include <strings.h>
#include <stdio.h>

int	main(void)
{
	char	test[] = "hello";
	char	test1[] = "hello";

	printf("%p\n", test);
	ft_bzero(test, 5);
	printf("%p\n\n", test);
	printf("%p\n", test1);
	ft_bzero(test1, 5);
	printf("%p\n", test1);
	return (0);
}*/
