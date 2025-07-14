/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:41:53 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 04:23:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

int	main(void)
{
	char	aconversion1[2];
	char	bconversion1[2];
	char	aconversion2[2];
	char	bconversion2[2];
	int		a;
	int		b;

	a = 42;
	b = 21;

	aconversion1[0] = (a / 10) + '0';
	aconversion1[1] = (a % 10) + '0';
	bconversion1[0] = (b / 10) + '0';
	bconversion1[1] = (b % 10) + '0';
	write(1, "a = ", 4);
	write (1, &aconversion1, 2);
	write (1, "\n", 1);
	write(1, "b = ", 4);
	write (1, &bconversion1, 2);
	write (1, "\n\n", 2);
	ft_swap(&a, &b);
	aconversion2[0] = (a / 10) + '0';
	aconversion2[1] = (a % 10) + '0';
	bconversion2[0] = (b / 10) + '0';
	bconversion2[1] = (b % 10) + '0';
	write(1, "a = ", 4);
	write (1, &aconversion2, 2);
	write (1, "\n", 1);
	write(1, "b = ", 4);
	write (1, &bconversion2, 2);
	write (1, "\n", 1);
	return (0);
}
