/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/12 15:30:47 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join = malloc(s1_len + s2_len + 1);
	if (!join)
		return (0);
	ft_strlcpy(join, s1, s1_len + 1);
	ft_strlcpy(&join[s1_len], s2, s2_len +1);
	return (join);
}
	// if (!s)
	// 	return (0);
	// s_len = ft_strlen(s);
	// if (s_len < (size_t) start)
	// {
	// 	start = 0;
	// 	len = 0;
	// }
	// if (s_len + (size_t) start < len)
	// 	len = s_len + (size_t) start;
	// len++;
	// sub = malloc((len) * sizeof(char));
	// if (!sub)
	// 	return (0);
	// ft_strlcpy(sub, &s[start], (len));
	// return (sub);