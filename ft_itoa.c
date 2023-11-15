/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:21:59 by thsion            #+#    #+#             */
/*   Updated: 2023/10/20 15:47:09 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		i++;
	}
	while (n >= 10 && ++i)
		n = n / 10;
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	number;

	number = n;
	i = ft_putnbr(number);
	res = malloc((i + 1) * sizeof(char));
	if (!res)
		return (0);
	res[i--] = '\0';
	if (number < 0)
		number = -number;
	while (i >= 0)
	{
		res[i--] = (number % 10) + 48;
		number = number / 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
/*#include <stdio.h>

int	main(void)
{
	int		n = 123456789;
	char	*res;

	res = ft_itoa(n);
	printf("%s\n", res);
	free (res);
	return (0);
}*/
