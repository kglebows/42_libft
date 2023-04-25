/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 18:02:44 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_dst;
	char	*temp_src;
	size_t	i;

	temp_dst = (char *)dst;
	temp_src = (char *)src;
	i = 0;
	if (!dst && !src && len)
		return (NULL);
	while (i < len)
	{
		if (src < dst)
			temp_dst[len - 1 - i] = temp_src[len - 1 - i];
		else
			temp_dst[i] = temp_src[i];
		i++;
	}
	return (temp_dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[100] = "1234567890abcdefghij";
//     char str2[100] = "1234567890abcdefghij";

//     write(1,&str1,100);
//     write(1,"\n",1);
//     ft_memmove(str1 + 6, str1, 10);
//     memmove(str2 + 6, str2, 10);
//     write(1,&str1,100);
//     write(1,"\n",1);
//     write(1,&str2,100);
//     write(1,"\n",1);
//     return(0);  
// }