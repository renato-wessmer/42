/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 21:35:18 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/14 05:15:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	str = (char *)malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	char	*original = "Renato na 42!";
	char	*copia;

	copia = ft_strdup(original);

	if (copia)
	{
		printf("Original: %s\n", original);
		printf("Cópia:    %s\n", copia);
		free(copia);
	}
	else
	{
		printf("Erro ao alocar memória.\n");
	}

	return (0);
}