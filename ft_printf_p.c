/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:29:54 by ichouare          #+#    #+#             */
/*   Updated: 2022/11/08 14:37:25 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_p(unsigned long num, char *base, int *count)
{
	size_t	len;

	len = ft_strlen(base);
	if (num < ft_strlen(base))
	{
		ft_putstr("0x", count);
		ft_putchar(base[num], count);
		return ;
	}
	ft_printf_p(num / len, base, count);
	ft_putchar(base[num % len], count);
}
