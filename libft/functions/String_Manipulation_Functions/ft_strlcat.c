/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:20:58 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/18 22:30:16 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*d;
	const char	*s;
	size_t		n;
	size_t		dlen;

	d = (char *)dst;
	s = (const char *)src;
	n = (size_t)dstsize;
	while (n > 0 && *d != '\0')
	{
		d++;
		n--;
	}
	dlen = d - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
			*d++ = *s;
			n--;
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

int	main(void)
{
	char	src[10] = ", mundo";
	char	dest[10] = "Oi";

	ft_strlcat(dest, src, 20);
	printf("Texto copiado: '%s'\n", dest);
	return (0);
}
