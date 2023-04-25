/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/17 18:25:21 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnum(int n)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	result[12];
	int		cnt;

	ft_bzero(result, 12);
	cnt = ft_countnum(n);
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
	ft_putstr_fd(result, fd);
}
//