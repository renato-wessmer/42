/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 01:56:35 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:11:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int	main(void)
{
	printf("ft_recursive_factorial(5) = %d\n", ft_recursive_factorial(5));
	printf("ft_recursive_factorial(0) = %d\n", ft_recursive_factorial(0));
	printf("ft_recursive_factorial(-3) = %d\n", ft_recursive_factorial(-3));
	printf("ft_recursive_factorial(12) = %d\n", ft_recursive_factorial(12));
	return (0);
}
