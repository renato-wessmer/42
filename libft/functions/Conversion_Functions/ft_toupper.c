/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:21:37 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 04:01:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_toupper(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}

int main(void)
{
    printf("%c", ft_toupper('a'));
    printf("%c", ft_toupper('z'));
    printf("%c", ft_toupper('A'));
    printf("%c", ft_toupper('5'));
    return (0);
}