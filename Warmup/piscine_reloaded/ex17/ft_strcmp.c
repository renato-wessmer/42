/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 05:12:07 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:14:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
	char *str1 = "hello";
	char *str2 = "hello";
	char *str3 = "world";

	int result1 = ft_strcmp(str1, str2);
	int result2 = ft_strcmp(str1, str3);
	printf("Resultado da comparação de '%s' e '%s': %d\n", str1, str2, result1);
	printf("Resultado da comparação de '%s' e '%s': %d\n", str1, str3, result2);
	return 0;
}
