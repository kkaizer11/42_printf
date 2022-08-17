/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 22:22:09 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/20 04:25:43 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_width(int n)
{
	size_t	width;

	width = (n <= 0);
	while (n)
	{
		n /= 10;
		width++;
	}
	return (width);
}

static	char	*strrev(char *str)
{
	size_t	i;
	size_t	len;
	char	tmp;

	if (!str || !*str)
		return (str);
	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char			*num;
	int				rem;
	size_t			i;
	const char		neg = (n < 0);
	const size_t	width = get_width(n);

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	num = ft_calloc(width + 1, sizeof(char));
	if (!num)
		return (NULL);
	if (neg)
		n = -n;
	i = 0;
	while (i < width)
	{
		rem = n % 10;
		n = n / 10;
		num[i] = "0123456789"[rem];
		i++;
	}
	if (neg)
		num[i - 1] = '-';
	return (strrev(num));
}
