/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/10 14:20:55 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*temp_dst;
	const char	*temp_src;

	if (n == 0 || dst == src)
		return (dst);
	temp_dst = dst;
	temp_src = (char *) src;
	while (n--)
		*temp_dst++ = *temp_src++;
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[20] = "1234567890xxxxxxxxxx";
//     char str2[20] = "1234567890xxxxxxxxxx";

//     write(1,&str1,10);
//     write(1,"\n",1);
//     memcpy(str1 + 5, str1, 10);
//     ft_memcpy(str2 + 5, str2, 10);
//     write(1,&str1,20);
//     write(1,"\n",1);
//     write(1,&str2,20);
//     write(1,"\n",1);
//     return(0);  
// }