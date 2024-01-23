/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2024/01/23 10:11:06 by kglebows         ###   ########.fr       */
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
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	if (!s || s == NULL)
		return (NULL);
	split = malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!split || split == NULL)
		return (NULL);
	while (i[0] < (size_t) ft_strlen(s) && i[1] < ft_countwords(s, c))
	{
		while (s[i[0]] == c)
			i[0]++;
		start = i[0];
		while (s[i[0]] != c && s[i[0]] != '\0')
			i[0]++;
		split[i[1]] = ft_substr(s, start, i[0] - start);
		if (ft_splitclean(split, i[1]))
			return (NULL);
		i[1]++;
	}
	split[i[1]] = NULL;
	return (split);
}
