/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:06:30 by mregada-          #+#    #+#             */
/*   Updated: 2024/11/12 12:14:30 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include "./Libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *, ...);
int	char_handler(va_list args);
int	str_handler(va_list args);
int	pointer_handler(va_list args);
int	ft_puthex(char format, va_list args);
int	ft_putdec(char format, va_list args);

#endif
