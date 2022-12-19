/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:01:22 by ichouare          #+#    #+#             */
/*   Updated: 2022/11/14 11:24:22 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	handler_printf(char a, va_list ptr, int *count)
{
	if (a == 'c')
		ft_putchar(va_arg(ptr, int), count);
	else if (a == 's')
		ft_putstr(va_arg(ptr, char *), count);
	else if (a == 'i' || a == 'd')
		ft_printf_ns(va_arg(ptr, unsigned int), "0123456789", count);
	else if (a == 'u')
		ft_printf_nu(va_arg(ptr, signed int), "0123456789", count);
	else if (a == 'x')
		ft_printf_nu(va_arg(ptr, signed int), "0123456789abcdef", count);
	else if (a == 'X')
		ft_printf_nu(va_arg(ptr, signed int), "0123456789ABCDEF", count);
	else if (a == 'p')
		ft_printf_p(va_arg(ptr, int *), "0123456789abcdef", count);
	else if (a == '%')
		ft_putchar('%', count);
	return (0);
}

int	ft_printf(const char *format_data, ...)
{
	va_list		ptr;
	int			i;
	int			count;

	i = 0;
	count = 0;
	va_start (ptr, format_data);
	while (format_data[i])
	{
		if (format_data[i] == '%')
		{
			while (format_data[i + 1] == 32 || format_data[i + 1] == 9)
				i++;
			handler_printf(format_data[i + 1], ptr, &count);
			i++;
		}
		else
			ft_putchar(format_data[i], &count);
		i++;
	}
	va_end (ptr);
	return (count);
}


int main()
{
	char *str="issam ";
	int *p;
	ft_printf("%p ",p);
	printf("%p",p);
	 }
