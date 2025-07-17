/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:12 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/17 14:05:21 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>

/*https://man.archlinux.org/man/extra/man-pages-pt_br/bzero.3.pt_BR*/
/*https://www.quora.com/In-C-what-is-the-difference-between-bzero-and-memset*/

void	ft_bzero(void *s, size_t n)
{
	size_t	position;
	char	*str;

	str = (char *)s;
	position = 0;
	while (position < n)
	{
		str[position] = 0;
		position++;
	}
}

int	main(void)
{
	char	str[10] = "Hello";

	printf("Antes: %s\n", str);
	ft_bzero(str, 3);
	printf("Depois: %s\n", str);
	return (0);
}


