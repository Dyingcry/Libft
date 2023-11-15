/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 10:52:46 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 16:17:29 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size / nmemb != size)
		return (0);
	res = malloc (nmemb * size);
	if (!res)
		return (NULL);
	else
		ft_bzero(res, nmemb * size);
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	void	*restest;

	restest = calloc(5, 5);
	printf("%p\n", restest);
	free(restest);
	return (0);
}*/
