/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 04:16:10 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/12 04:17:10 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("pedrinho comeu %s e %s no %s\n", "pão", "biscoito", "cafe da manhã");
	printf("pedrinho comeu %s e %s no %s\n", "pão", "biscoito", "cafe da manhã");
}
