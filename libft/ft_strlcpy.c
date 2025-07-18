/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:21:01 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/18 13:25:49 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	char	src[] = "Oi, mundo!";
	char	dest[10];
	size_t	copied;

	copied = ft_strlcpy(dest, src, sizeof(dest));

	printf("Texto copiado: '%s'\n", dest);
	printf("Tamanho da string original: %zu\n", copied);
	return (0);
}


/*https://www.youtube.com/watch?v=SJQ5VKDYUKs&t=745s*/
