/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 02:13:17 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:12:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	square_root;

	square_root = 1;
	if (nb < 0)
		return (0);
	while ((square_root * square_root) < nb)
	{
		square_root++;
	}
	if ((square_root * square_root) == nb)
	{
		return (square_root);
	}
	return (0);
}

int	main(void)
{
	printf("ft_sqrt(4) = %d\n", ft_sqrt(4));
	printf("ft_sqrt(5) = %d\n", ft_sqrt(5));
	printf("ft_sqrt(-3) = %d\n", ft_sqrt(-3));
	return (0);
}
