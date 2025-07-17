/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:18 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/17 07:16:02 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main (void)
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('&'));
	printf("%d\n", ft_isalnum('A'));
	printf("%d\n", ft_isalnum('Z'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('^'))
}
