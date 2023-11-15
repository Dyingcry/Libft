/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 11:19:16 by thsion            #+#    #+#             */
/*   Updated: 2023/10/19 15:46:57 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				i;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while ((ss1[i] == ss2[i]) && --n)
		i++;
	return (ss1[i] - ss2[i]);
}
/*#include <stdio.h>

int	main(void)
{
	char	s1[] = "oui";
	char	s2[] = "oon";

	printf("%d\n", ft_memcmp(s1, s2, 2));
	return (0);
}*/
