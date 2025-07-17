/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:20:01 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/17 13:23:54 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	fill_in;
	char	*str;

	str = (char *)s;
	fill_in = 0;
	while (fill_in < n)
	{
		str[fill_in] = c;
		fill_in++;
	}
	return (s);
}

int	main(void)
{
	char	str[10] = "Hello";

	printf("Antes: %s\n", str);
	ft_memset(str, 'X', 3);
	printf("Depois: %s\n", str);
	return (0);
}
