/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/10 18:24:09 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		size;

	size = ft_strlen(s1) + 1;
	result = malloc((size_t) size);
	if (!result)
		return (0);
	ft_strlcpy(result, s1, (size_t) size);
	return (result);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int main() 
// {
//     char str1[] = "    -1s23sfafafa32423";
//     int result;

//     printf("\n : ft_atoi : \n");
//     result = atoi(str1);
//     if (result == 0)
//         printf("\nNULL : should be");
//     else
//         printf("\n%d : should be" , result);
//     result = ft_atoi(str1);
//     if (result == 0)
//         printf("\nNULL : is\n");
//     else
//         printf("\n%d : is\n" , result);

//     printf("\n : end : \n\n");
//     return 0;
// }
