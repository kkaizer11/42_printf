/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 04:16:10 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 19:28:01 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
// int	main(void)
// {
// 	ft_printf("pedrinho comeu %s e %s no %s\n", "pão", "biscoito", "cafe da manhã");
// 	printf("pedrinho comeu %s e %s no %s\n", "pão", "biscoito", "cafe da manhã");
// }

int main(void)
{
	ft_printf("Replica: ULONG_MAX = %u\n", ULONG_MAX);
	printf("Original: ULONG_MAX = %lu\n", ULONG_MAX);
	// ft_printf("Replica: 10000 = %X\n", 1000);
	// printf("Original: 10000 = %X\n", 1000);
}

