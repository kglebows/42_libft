/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 17:34:23 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr = s;

	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return ((void *) ptr);
		ptr++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     char str[] = "123a129";
//     int c = '\0';
//     size_t n = 100;
//     void* ptr;

//     ptr = memchr(str, c, n);
//     if (ptr == NULL)
//         printf("\nCharacter not Found\n");
//     else
//         printf("\nmemchr() at position: %ld\n" , ptr - str);
//    ptr = ft_memchr(str, c, n);
//     if (ptr == NULL)
//         printf("\nCharacter not Found\n");
//     else
//         printf("\nft_memchr() at position: %ld\n" , ptr - str);
//     return 0;
// }
