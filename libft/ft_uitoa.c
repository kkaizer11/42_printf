/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:46:07 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/16 19:46:07 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_uitoa(unsigned int n, int base)
{
	char		*str;
	
	size_t		i;

	i = ft_numlem(n, base);
	str = (char *)malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	i--;
	if (n == 0)
		str[0] = '0';
	if (base == 10)
	{
		while (n > 0)
		{
			str[i] = DECIMAL[n % base];
			n /= base;
			i--;
		}
	}
	if (base == 16)
	{
		while (n > 0)
		{
			str[i] = HEX_UPPER[n % base];
			n /= base;
			i--;
		}
	}
	return (str);
}
