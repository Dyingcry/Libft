/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:36:34 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 11:10:42 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *) s;
	i = ft_strlen(b);
	if (!(char)c)
		return (b + ft_strlen(s));
	while (i >= 0)
	{
		if (b[i] == ((char)c))
			return (b + i);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	s[] = "allo";

	printf("%s\n", ft_strrchr(s, 'l'));
	return (0);
}*/
