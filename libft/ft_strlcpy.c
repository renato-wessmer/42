/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:21:01 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/18 21:35:37 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
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
