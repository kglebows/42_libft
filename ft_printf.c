/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:48:32 by kglebows          #+#    #+#             */
/*   Updated: 2023/08/24 13:07:19 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

ssize_t	ft_printf_spec(va_list va, char str)
{
	int		printed;

	printed = -1;
	if (str == 'c')
		printed = ft_printf_c(va_arg(va, int));
	else if (str == 's')
		printed = ft_printf_s(va_arg(va, char *));
	else if (str == 'p')
		printed = ft_printf_p(va_arg(va, unsigned long));
	else if (str == 'd' || str == 'i')
		printed = ft_printf_n(va_arg(va, int));
	else if (str == 'u')
		printed = ft_printf_u(va_arg(va, unsigned int));
	else if (str == 'x')
		printed = ft_printf_x(va_arg(va, unsigned int), 0);
	else if (str == 'X')
		printed = ft_printf_x(va_arg(va, unsigned int), 1);
	else if (str == '%')
		printed = ft_printf_c('%');
	return (printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	int		printed;
	int		errorcheck;

	printed = 0;
	va_start(va, str);
	while (*str != '\0')
	{
		errorcheck = printed;
		if (*str == '%')
		{
			str++;
			printed += ft_printf_spec(va, *str);
		}
		else
			printed += write(1, str, 1);
		str++;
		if (printed < errorcheck)
			return (-1);
	}
	va_end(va);
	return (printed);
}
