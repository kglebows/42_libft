/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 18:52:53 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		else if ((unsigned char)*s1 == '\0' || (unsigned char)*s2 == '\0')
			break ;
		s1++;
		s2++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main() 
// {
//     char str2[] = "1230a1299";
//     char str1[] = "1230a129";
//     int nr = 12;
//     int result = 0;

//     result = strncmp(str1, str2, nr);
//     if (result==0)
//         printf("Strings are equal");
//     else
//         printf("Strings are unequal");
//     printf("\nValue returned by strcmp() is: %d\n" , result);
//     result = ft_strncmp(str1, str2, nr);
//     if (result==0)
//         printf("Strings are equal");
//     else
//         printf("Strings are unequal");
//     printf("\nValue returned by ft_strcmp() is: %d\n" , result);
//     return 0;
// }
