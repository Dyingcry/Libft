/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsion <thsion@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:39:13 by thsion            #+#    #+#             */
/*   Updated: 2023/10/31 11:05:25 by thsion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_count_char(const char	*str, int start, int end)
{
	int		i;
	char	*cp;

	i = 0;
	cp = (char *) malloc(((end - start) + 1) * sizeof(char));
	if (!cp)
		return (NULL);
	while (start < end)
		cp[i++] = str[start++];
	cp[i] = '\0';
	return (cp);
}

static int	ft_count_words(const char *str, char sep)
{
	int	i;
	int	start;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep && str[i])
			i++;
		start = i;
		while (str[i] != sep && str[i])
			i++;
		if (start != i)
			count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	tab = (char **) malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (start != i)
			tab[j++] = ft_count_char(s, start, i);
	}
	tab[j] = 0;
	return (tab);
}
/*#include <stdio.h>

int    main(void)
{
    char    str[] = "oui allo je suis un connard";
    char    **fct = ft_split(str, ' ');
    int    i;

    for (i = 0; i < ft_count_words(str, ' '); i++)
    {
        printf("%s\n", fct[i] );
    }
    free (fct);
    return (0);
}*/
