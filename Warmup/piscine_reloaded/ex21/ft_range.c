/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 22:08:45 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:15:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}

int	main(void)
{
	int	min = 5;
	int	max = 100;
	int	*range;
	int	size;
	int	i;

	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Intervalo inválido ou erro de alocação.\n");
		return (1);
	}
	size = max - min;
	printf("Array de %d a %d:\n", min, max - 1);
	for (i = 0; i < size; i++)
	{
		printf("%d ", range[i]);
	}
	printf("\n");

	free(range); // Libera a memória alocada

	return (0);
}
