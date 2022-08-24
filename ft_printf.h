/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:45:47 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 15:19:23 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);

int		write_c(char *str, int arg);
int		write_percent(char *str);
int		write_s(char *str, char *arg);
int		write_idu(char *str, int arg);
int		write_hex(char *str, int arg);

int		conversion_selection(char *str, va_list ap);

#endif