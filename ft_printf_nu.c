/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nu.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:37:17 by ichouare          #+#    #+#             */
/*   Updated: 2022/11/13 10:09:26 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{	
		i++;
	}
	return (i);
}

void	ft_printf_nu(int num, char *base, int *count)
{
	unsigned int	number ;
	size_t			len;
	int				i;

	i = 0;
	len = ft_strlen(base);
	number = num;
	if (number < ft_strlen(base))
	{
		ft_putchar(base[number], count);
		return ;
	}
	i++;
	ft_printf_nu(number / len, base, count);
	ft_putchar(base[number % len], count);
}
