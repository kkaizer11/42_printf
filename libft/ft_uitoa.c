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

int	count_digit(unsigned int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned long long int n)
{
	char	*n_str;
	int		n_len;

	if (n == 0)
		return (ft_strdup("0"));
	n_len = count_digit(n);
	n_str = ft_calloc(n_len + 1, sizeof(char));
	if (!n_str)
		return (0);
	n_str[n_len--] = '\0';
	while (n)
	{
		n_str[--n_len] = '0' + (n % 10);
		n /= 10;
	}
	return (n_str);
}
