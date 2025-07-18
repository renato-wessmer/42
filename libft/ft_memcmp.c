/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:52 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/18 11:26:51 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <"libft.h"> lembra de colocar em todos apos os testes*/

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr;
	const unsigned char	*ptr1;

	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;

	if (n == 0)
	{
		return (0);
	}

	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}
