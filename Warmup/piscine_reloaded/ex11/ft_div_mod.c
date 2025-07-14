/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 18:31:21 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 04:22:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	value_a;
	int	value_b;
	int	div;
	int	mod;

	value_a = 100;
	value_b = 50;
	ft_div_mod(value_a, value_b, &div, &mod);
	printf("%d \n", div);
	printf("%d \n", mod);
	return (0);
}
