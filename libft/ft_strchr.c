/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 19:43:08 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/06/01 03:59:01 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{	
	char	*str;
	size_t	i;
	size_t	s_len;

	str = (char *)s;
	s_len = ft_strlen(s);
	i = 0;
	while (i <= s_len)
	{
		if (str[i] == (char) c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
