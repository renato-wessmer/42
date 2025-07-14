/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 19:50:51 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 04:32:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fatctorial;

	fatctorial = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 1)
	{
		fatctorial = fatctorial * nb;
		nb--;
	}
	return (fatctorial);
}

int    main(void)
{
	printf("ft_iterative_factorial(5) = %d\n", ft_iterative_factorial(5));
	printf("ft_iterative_factorial(0) = %d\n", ft_iterative_factorial(0));
	printf("ft_iterative_factorial(-3) = não existe para números negativos\n", ft_iterative_factorial(-3));
	printf("ft_iterative_factorial(12) = %d\n", ft_iterative_factorial(12));
	return (0);
}
