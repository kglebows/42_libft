/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/10 20:09:20 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*end;

	end = NULL;
	if (*s == (char) c)
		end = (char *)s;
	while (*s++)
	{
		if (*s == (char)c)
			end = (char *)s;
	}
	return (end);
}
// #include <stdio.h>
// #include <string.h>
// int main() 
// {
//     char str[] = "the answer is always 42";
//     char* ptr = strrchr(str, 'a');
//     if (ptr != NULL) {
//         printf("Found last character 'a' at position %ld\n", ptr - str);
//     } else {
//         printf("Character not found.\n");
//     }
//     return 0;
// }
