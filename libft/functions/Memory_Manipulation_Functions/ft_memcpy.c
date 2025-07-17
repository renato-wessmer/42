/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:55 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/17 17:50:38 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	number_of_bytes;
	char	str_dest;
	char	str_src;

	str_dest = (char *) dest;
	str_src = (char *) src;
	number_of_bytes = 0;
	while (number_of_bytes < n)
	{
		str_dest = str_src;
		number_of_bytes++;
	}
}


int	main(void)
{
	char src[] = "Hello, world!";
	char dest[20];
	memcpy(dest, src, strlen(src) + 1);
	printf("Destino: %s\n", dest); // Output: Destino: Hello, world!
	return 0;
}