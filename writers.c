/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 03:38:44 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 10:41:12 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_c(char *str, int arg)
{
	ft_putchar_fd(arg, 1);
	str++;
	return (1);
}

int	write_percent(char *str)
{
	ft_putchar_fd(37, 1);
	str++;
	return (1);
}

int	write_s(char *str, char *arg)
{
	if (!arg || arg == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(arg, 1);
	str++;
	return (ft_strlen(arg));
}

int	write_di(int arg)
{
	char	*temp;
	int		len;

	temp = ft_itoa(arg);
	ft_putstr_fd(temp, 1);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}

int	write_u(unsigned int arg)
{
	char	*temp;
	int		len;

	if (arg == '\0')
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	temp = ft_uitoa(arg, 10);
	ft_putstr_fd(temp, 1);
	len = ft_strlen(temp);
	free(temp);
	return (len);
}
