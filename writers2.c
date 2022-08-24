/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 12:52:28 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 12:52:28 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	write_hex(char *str, int arg)
{
	char	*temp;
	int		len;
    int		upOrLow;

    if (*str == 'X')
        upOrLow = 0;
    if (*str == 'x')
        upOrLow = 1;
    temp = ft_hextoa(arg, upOrLow);
    ft_putstr_fd(temp, 1);
    len = ft_strlen(temp);
    free(temp);
    return (len);
}