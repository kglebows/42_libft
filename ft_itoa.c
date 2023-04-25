/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/14 18:22:44 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnumbers(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		cnt;

	cnt = ft_countnumbers(n);
	result = malloc(sizeof(char) * (cnt + 1));
	if (!result)
		return (NULL);
	result[cnt] = '\0';
	if (n < 0)
		result[0] = '-';
	if (n == 0)
		result[0] = '0';
	while (cnt > 0)
	{
		cnt--;
		if (n > 0)
			result[cnt] = (char)(n % 10) + 48;
		if (n < 0)
			result[cnt] = (char)(n % 10)*(-1) + 48;
		n = n / 10;
	}
	return (result);
}
//