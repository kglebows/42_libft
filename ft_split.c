/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/21 11:06:52 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countwords(char const *str, char deli)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == deli)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != deli && str[i] != '\0')
			i++;
	}
	return (count);
}

int	ft_splitclean(char **sp, size_t j)
{
	int	ret;

	ret = 0;
	if (sp[j] == NULL)
	{
		while (j > 0)
			free(sp[--j]);
		free(sp);
		ret = 1;
	}
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	split = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!s || split == NULL)
		return (NULL);
	while (i < (size_t) ft_strlen(s) && j < ft_countwords(s, c))
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		split[j] = ft_substr(s, start, i - start);
		if (ft_splitclean(split, j))
			return (NULL);
		j++;
	}
	split[j] = NULL;
	return (split);
}
//