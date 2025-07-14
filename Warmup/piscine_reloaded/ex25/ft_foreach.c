/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 03:18:46 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:17:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i++]);
	}
}

void	ft_putchar_int(int nb)
{
	char	c;

	if (nb >= 0 && nb <= 9)
	{
		c = nb + '0';
	}
	else
	{
		c = '?';
	}
	write(1, &c, 1);
	write(1, " ", 1);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};

	ft_foreach(tab, 5, &ft_putchar_int);
	write(1, "\n", 1);
	return (0);
}
