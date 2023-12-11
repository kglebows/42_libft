/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/13 14:14:41 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int				s1_len;
	unsigned int	start;

	s1_len = ft_strlen(s1);
	if (s1_len == 0)
		return (ft_strdup(""));
	start = 0;
	while (start < (unsigned int) s1_len && ft_strchr(set, s1[(int) start]))
		start++;
	if (start >= (unsigned int) s1_len)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[s1_len]))
		s1_len--;
	return (ft_substr(s1, start, s1_len - start + 1));
}
//