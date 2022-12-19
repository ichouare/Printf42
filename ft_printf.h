/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichouare <ichouare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:01:52 by ichouare          #+#    #+#             */
/*   Updated: 2022/11/08 14:24:32 by ichouare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_printf_nu(int num, char *base, int *count);
void	ft_printf_ns(int num, char *base, int *count);
int		handler_printf(char a, va_list ptr, int *count);
void	ft_printf_p(unsigned long num, char *base, int *count);
int		ft_printf(const char *format_data, ...);
#endif