/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaizer- <mkaizer-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 04:16:10 by mkaizer-          #+#    #+#             */
/*   Updated: 2022/08/29 15:28:20 by mkaizer-         ###   ########.fr       */
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
	ft_printf("Replica:  0x%x\n",INT_MAX);
	printf("Original: %p\n",INT_MAX);
	// ft_printf("Replica: 10000 = %X\n", 1000);
	// printf("Original: 10000 = %X\n", 1000);
}
