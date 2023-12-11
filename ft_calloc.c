/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/25 12:16:38 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (count && (count * size) / count != size)
		return (0);
	result = malloc(count * size);
	if (!result)
		return (0);
	ft_bzero(result, count * size);
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
