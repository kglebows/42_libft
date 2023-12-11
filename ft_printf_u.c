/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:19:58 by kglebows          #+#    #+#             */
/*   Updated: 2023/08/24 13:07:10 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countnumbersu(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_writenumber(unsigned int n)
{
	if (n > 9)
		ft_writenumber(n / 10);
	else
	{
		ft_printf_c(n + '0');
		return ;
	}
	ft_printf_c((n % 10) + '0');
}

int	ft_printf_u(unsigned int n)
{
	ft_writenumber(n);
	return (ft_countnumbersu(n));
}
//