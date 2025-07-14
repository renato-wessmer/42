/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:21:33 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 04:01:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}

int main(void)
{
    printf("%c", ft_tolower('a'));
    printf("%c", ft_tolower('z'));
    printf("%c", ft_tolower('A')); 
    printf("%c", ft_tolower('5'));
    return (0);
}