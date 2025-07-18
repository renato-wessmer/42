/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:58 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/18 12:00:03 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	position;

	position = 0

	if (dest==NULL && src=NULL)
		return (NULL);
	position = 0;
	if ((size_t)dest - (size_t)src < n)
	{
		position = n - 1;
		while (position < n)
		{
			((unsigned char *)dest)[position] = ((unsigned char *)src)[position];
			position--;
		}
	}
	else
	{
		while (position < n)
		{
			((unsigned char *)dest)[position] = ((unsigned char *)src)[position];
			position++;
		}
	}
	return (dest);
}


/*https://notes.devnyxie.com/0-Notes/c/libft/ft_memmove*/