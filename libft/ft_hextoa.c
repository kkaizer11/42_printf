/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hextoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 15:29:57 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/26 15:29:57 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_lennumm(unsigned long long int num)
{
	unsigned int	len;

	len = 1;
	while (num >= 16)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

char	*ft_hextoa(unsigned long long int num, int upper_or_lower)
{
	char			*base;
    unsigned int	len_str;
	char			*str;

	if (upper_or_lower == 0)
        base = HEX_LOWER;
    if (upper_or_lower == 1)
        base = HEX_UPPER;
    len_str = ft_lennumm(num);
	str = calloc(len_str + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	while (len_str > 0)
	{
		len_str--;
		str[len_str] = base[num % 16];
		num = num / 16;
	}
	if (len_str == 1)
		str[0] = '0';
	return (str);
}
