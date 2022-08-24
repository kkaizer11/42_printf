/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 04:16:10 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/24 10:00:26 by mkaizer-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

// int	main(void)
// {
// 	ft_printf("pedrinho comeu %s e %s no %s\n", "pão", "biscoito", "cafe da manhã");
// 	printf("pedrinho comeu %s e %s no %s\n", "pão", "biscoito", "cafe da manhã");
// }

int main(void)
{
	ft_printf("Replica: -1 = %u\n", 30);
	printf("Original: -1 = %u\n", 30);
	ft_printf("Replica: Valor Max = %u\n", 4294967295);
	printf("Original: Valor Max = %lu\n", 4294967295);
}