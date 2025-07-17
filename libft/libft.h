/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rwessner <rwessner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:11:14 by marvin            #+#    #+#             */
/*   Updated: 2025/07/17 07:29:58 by rwessner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Arquivo: libft.h
#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);

size_t	ft_strlen(const char *s);
#endif