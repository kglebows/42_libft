/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/08/14 13:43:33 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_atoi(const char *str)
{
	long		n;
	int			s;
	int			cnt;

	s = 1;
	n = 0;
	cnt = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
		cnt++;
	}
	if (cnt > 11)
		return (99999999999);
	return (n * s);
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
