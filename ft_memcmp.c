/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 17:22:47 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1 = s1;
	const unsigned char	*str2 = s2;

	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     char str1[] = "123a128";
//     char str2[] = "123a129";
//     size_t n = 8;
//     int result = 0;

//     result = memcmp(str1, str2, n);
//     if (result == 0)
//         printf("\nStrings are identical\n");
//     else
//         printf("\nByte difference found by memcmp(): %d\n" , result);
//     result = ft_memcmp(str1, str2, n);
//     if (result == 0)
//         printf("\nStrings are identical\n");
//     else
//         printf("\nByte difference found by ft_memcmp(): %d\n" , result);
//     return 0;
// }
