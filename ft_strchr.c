/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/10 18:39:09 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
			return ((char *) s);
		s++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) s);
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     char str[] = "the answer is always 42";
//     char* ptr = strchr(str, '4');
//     if (ptr != NULL) {
//         printf("Found character '4' at position %ld\n", ptr - str);
//     } else {
//         printf("Character not found.\n");
//     }
//     return 0;
// }
