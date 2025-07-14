/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:39:25 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 04:23:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	char	nbrconversion[2];
	int		nbr;

	ft_ft(&nbr);
	nbrconversion[0] = (nbr / 10) + '0';
/*traz o número 4 da dezena*/
	nbrconversion[1] = (nbr % 10) + '0';
/*trás o número 2 resto que é a unidade*/
	write (1, &nbrconversion, 2);
	write(1, "\n", 1);
	return (0);
}

