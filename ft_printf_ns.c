/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:09:03 by ichouare          #+#    #+#             */
/*   Updated: 2022/11/08 14:46:45 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_ns(int num, char *base, int *count)
{
	unsigned int	number;

	if (num < 0)
	{
		ft_putchar('-', count);
		num *= -1;
	}
	number = num;
	if (number < 10)
	{
		ft_putchar(base[number], count);
		return ;
	}
	ft_printf_ns(number / 10, base, count);
	ft_putchar(base[number % 10], count);
}
