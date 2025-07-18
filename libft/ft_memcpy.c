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
	size_t				number_of_bytes;
	unsigned char		*str_dest;
	const unsigned char	*str_src;

	str_dest = (unsigned char *) dest;
	str_src = (const unsigned char *) src;
	number_of_bytes = 0;
	if (dest == NULL && src == NULL)
	return (NULL);

	while (number_of_bytes < n)
	{
		str_dest[number_of_bytes] = str_src[number_of_bytes];
		number_of_bytes++;
	}
	return (dest);
}


int main()
{
	char src[] = "Olá, mundo!";
	char dest[20];

	ft_memcpy(dest, src, sizeof(src));
	printf("Destino: %s\n", dest);

	return 0;
}