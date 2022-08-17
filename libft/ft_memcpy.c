/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:58:50 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/08 04:55:07 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*s_dest;
	unsigned char	*s_src;

	s_dest = (unsigned char *) dest;
	s_src = (unsigned char *) src;
	i = 0;
	if (!dest || !src)
		return (s_dest);
	while (i < n)
	{
		s_dest[i] = s_src[i];
		i++;
	}
	return (s_dest);
}
