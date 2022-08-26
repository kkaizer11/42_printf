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
    int		up_or_low;

    if (*str == 'x')
        up_or_low = 0;
    if (*str == 'X')
        up_or_low = 1;
    temp = ft_hextoa(arg, up_or_low);
    ft_putstr_fd(temp, 1);
    len = ft_strlen(temp);
    free(temp);
    return (len);
}