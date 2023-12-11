/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 16:24:18 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		dst_len;
	size_t		src_len;
	size_t		copy_len;
	char		*dst_end;
	const char	*src_end;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < dstsize)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len >= dstsize)
		return (dst_len + src_len);
	copy_len = dstsize - dst_len - 1;
	if (src_len < copy_len)
		copy_len = src_len;
	dst_end = dst + dst_len;
	src_end = src + copy_len;
	while (src < src_end)
		*dst_end++ = *src++;
	*dst_end = '\0';
	return (dst_len + src_len);
}
// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char src[2] = "12";
//     char str1[20] = "abcd";    
//     char str2[20] = "abcd";
//     char str3[20] = "abc";
//     char str4[20] = "abc";
//     char str5[20] = "ab";
//     char str6[20] = "ab";
//     char str7[2] = "\0";
//     char str8[2] = "\0";
//     size_t lenght;

//     lenght = strlcat(str1, src, 0);
//     printf("-=0 test=-\n%zu %s :should be\n", lenght, str1);
//     lenght = ft_strlcat(str2, src, 0);
//     printf("%zu %s :is\n", lenght, str2);
//     lenght = strlcat(str3, src, 3);
//     printf("-=dst too long test=-\n%zu %s :should be\n", lenght, str3);
//     lenght = ft_strlcat(str4, src, 3);
//     printf("%zu %s :is\n", lenght, str4);
//     lenght = strlcat(str5, src, 12);
//     printf("-=normal test=-\n%zu %s :should be\n", lenght, str5);
//     lenght = ft_strlcat(str6, src, 12);
//     printf("%zu %s :is\n", lenght, str6);
//     lenght = strlcat(str7, src, 2);
//     printf("-=null test=-\n%zu %s :should be\n", lenght, str7);
//     lenght = ft_strlcat(str8, src, 2);
//     printf("%zu %s :is\n", lenght, str8);
//     return(0);  
// }