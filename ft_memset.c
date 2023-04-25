/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kglebows <kglebows@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 15:45:55 by kglebows          #+#    #+#             */
/*   Updated: 2023/04/09 17:43:48 by kglebows         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *) b;
	while (len--)
		*str++ = (unsigned char) c;
	return (b);
}
// #include <stdio.h>

// int main()
// {
//     char str[10] = "1234567890";

//     write(1,&str,10);
//     write(1,"\n",1);
//     ft_memset(str + 2, 42, 6);
//     write(1,&str,10);
//     write(1,"\n",1);
//     return(0);  
// }