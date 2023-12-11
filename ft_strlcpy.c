/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 20:51:57 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src_len < dstsize)
		ft_memmove(dst, src, src_len + 1);
	else if (dstsize > 0)
	{
		ft_memmove(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}

// size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
// {
// 	char		*d;
// 	char		*e;
// 	const char	*s = src;

// 	d = dst;
// 	e = dst + (int) dstsize;
// 	if (dstsize > 0)
// 	{
// 		while (d < e && *s != '\0')
// 			*d++ = *s++;
// 		if (d < e)
// 			*d = 0;
// 		else if ((int) dstsize > 0)
// 			d[-1] = 0;		
// 		while (*s != '\0')
// 				s++;	
// 		return (s - src);
// 	}
// 	else
// 		return(ft_strlen(src));
// }

// #include <stdio.h>

// int main()
// {
//     char str1[10] = "1234567890";
//     char str2[5] = "xxxxx";
//     size_t lenght;

//     write(1,&str1,10);
//     write(1,"\n",1);
//     lenght = ft_strlcpy(str2, str1, 6);
//     write(1,&str2,10);
//     write(1,"\n",1);
//     printf("%zu", lenght);
//     return(0);  
// }