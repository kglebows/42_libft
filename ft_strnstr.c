/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/10 18:13:49 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		needle_len;
	size_t	i;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *) haystack);
	i = 0;
	while (i < len && *haystack != 0)
	{
		if ((len - i) >= (size_t) needle_len && *haystack == *needle
			&& (ft_strncmp(haystack, needle, needle_len) == 0))
			return ((char *) haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
// #include <stdio.h>
// #include <string.h>
// int main() 
// {
//     char str1[] = "123a12d128b";
//     char str2[] = "d";
//     size_t n = 2;
//     char *result = NULL;
//     printf("\n : ft_strnstr : \n");
//     result = strnstr(str1, str2, n);
//     if (result == 0)
//         printf("\nNULL : should be");
//     else
//         printf("\n%s : should be" , result);
//     result = ft_strnstr(str1, str2, n);
//     if (result == 0)
//         printf("\nNULL : is\n");
//     else
//         printf("\n%s : is\n" , result);
//     printf("\n : end : \n\n");
//     return 0;
// }™