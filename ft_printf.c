/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:47:37 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 17:11:02 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conversion_selection(char *str, va_list ap)
{
	int	i;

	i = 0;
	if (*str == 'c')
		i += write_c(str, va_arg(ap, int));
	if (*str == '%')
		i += write_percent(str);
	if (*str == 's')
		i += write_s(str, va_arg(ap, char *));
	if (*str == 'i' || *str == 'd' || *str == 'u')
		i += write_idu(str, va_arg(ap, int));
	if (*str == 'X' || *str == 'x')
		i += write_hex(str, va_arg(ap, unsigned long long int));
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	ap;

	i = 0;
	va_start(ap, str);
	while (*str)
	{
		if (*str == '%')
			i += conversion_selection((char *)++str, ap);
		else
		{
			write(1, str, 1);
			i++;
		}
		str++;
	}
	va_end(ap);
	return (i);
}
