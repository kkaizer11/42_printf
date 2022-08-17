/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 23:55:22 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/19 04:41:43 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*src;

	src = (char *)s;
	len = ft_strlen(s);
	while ((len + 1) > 0)
	{
		if (src[len] == (char)c)
			return (&src[len]);
		len --;
	}
	return (NULL);
}
