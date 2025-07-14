/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 03:19:01 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:20:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	h;
	int	num;

	h = 0;
	num = 0;
	while (tab[h])
	{
		if (f(tab[h]) == 1)
		{
			num++;
		}
		h++;
	}
	return (num);
}

int	starts_with_a(char *str)
{
	return (str[0] == 'a');
}

int	main(void)
{
	char *palavras[] = {"amor", "bola", "ave", "casa", "abacaxi", NULL};

	int resultado = ft_count_if(palavras, &starts_with_a);

	printf("Strings que começam com 'a': %d\n", resultado);

	return (0);
}
