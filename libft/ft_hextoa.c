/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:02:56 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 15:02:56 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_hextoa(unsigned int n, int upper_or_lower)
{
	char	*str;
    char	*base;
	size_t	i;

    if (upper_or_lower == 0)
    {
        base = HEX_UPPER;
    }
    if (upper_or_lower == 1)
    {
        base = HEX_LOWER;
    }
	i = ft_numlem(n, 16);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = base[n % 16];
		n /= 16;
		i--;
	}
	return (str);
}
