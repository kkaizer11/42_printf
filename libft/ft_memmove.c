/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 23:37:17 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/03 04:04:22 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (dest);
	if (dest != src)
	{
		while (n --)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
