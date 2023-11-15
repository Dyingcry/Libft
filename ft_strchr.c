/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 13:09:28 by thsion            #+#    #+#             */
/*   Updated: 2023/10/24 11:58:45 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*b;

	b = (char *) s;
	i = 0;
	if (!(char) c)
		return (b + ft_strlen(s));
	while (b[i])
	{
		if (b[i] == (char) c)
			return (b + i);
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>

int	main(void)
{
	char	s[] = "oui";

	printf("%s\n", ft_strchr(s, 'u'));
	return (0);
}*/
