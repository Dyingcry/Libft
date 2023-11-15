/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 13:51:00 by thsion            #+#    #+#             */
/*   Updated: 2023/10/12 13:39:28 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str = "123";
	char *res1;
	char *res2;

	res1 = ft_strdup(str);
	res2 = strdup(str);
	printf("ma fonction : %s\n", res1);
	printf("la fonction : %s\n", res2);

	free(res1);
	free(res2);
	return(0);
}*/
