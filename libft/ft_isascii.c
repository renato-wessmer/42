/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 09:19:24 by rwessner          #+#    #+#             */
/*   Updated: 2025/07/17 08:02:09 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	printf("=== TESTE ft_isascii ===\n\n");
	
	// Teste casos válidos (deve retornar 1)
	printf("CASOS VÁLIDOS (esperado: 1):\n");
	printf("ft_isascii(0):    %d\n", ft_isascii(0));      // Caractere nulo
	printf("ft_isascii(9):    %d\n", ft_isascii(9));      // Tab
	printf("ft_isascii(10):   %d\n", ft_isascii(10));     // Newline
	printf("ft_isascii(32):   %d\n", ft_isascii(32));     // Espaço
	printf("ft_isascii(48):   %d\n", ft_isascii(48));     // '0'
	printf("ft_isascii(65):   %d\n", ft_isascii(65));     // 'A'
	printf("ft_isascii(97):   %d\n", ft_isascii(97));     // 'a'
	printf("ft_isascii(122):  %d\n", ft_isascii(122));    // 'z'
	printf("ft_isascii(127):  %d\n", ft_isascii(127));    // DEL
	
	printf("\nCASOS INVÁLIDOS (esperado: 0):\n");
	printf("ft_isascii(-1):   %d\n", ft_isascii(-1));     // Negativo
	printf("ft_isascii(-10):  %d\n", ft_isascii(-10));    // Negativo
	printf("ft_isascii(128):  %d\n", ft_isascii(128));    // Fora do ASCII
	printf("ft_isascii(255):  %d\n", ft_isascii(255));    // Fora do ASCII
	printf("ft_isascii(1000): %d\n", ft_isascii(1000));   // Muito grande
	
	printf("\nTESTE COM CARACTERES:\n");
	printf("ft_isascii('A'):  %d\n", ft_isascii('A'));    // 'A' = 65
	printf("ft_isascii('z'):  %d\n", ft_isascii('z'));    // 'z' = 122
	printf("ft_isascii('0'):  %d\n", ft_isascii('0'));    // '0' = 48
	printf("ft_isascii(' '):  %d\n", ft_isascii(' '));    // ' ' = 32
	printf("ft_isascii('\\n'): %d\n", ft_isascii('\n'));   // '\\n' = 10
	printf("ft_isascii('\\t'): %d\n", ft_isascii('\t'));   // '\\t' = 9
	
	return (0);
}
