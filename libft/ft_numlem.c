/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:49:40 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/17 14:49:40 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_numlem(long int num, int base)
{
    size_t  i;

    i = 0;
    if(num == 0)
        return (0)
    if (num < 0)
    {
        num *= -1
        i++;
    }
    while (num > 0)
    {
        num /= base;
        i++;
    }
    return (i);
}
