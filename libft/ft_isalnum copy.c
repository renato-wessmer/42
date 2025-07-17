/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:18 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/17 08:00:13 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isascii(c) && (ft_isalpha(c) || ft_isdigit(c)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
