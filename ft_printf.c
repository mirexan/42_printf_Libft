/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:58:03 by mregada-          #+#    #+#             */
/*   Updated: 2024/11/12 12:14:54 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	selector(char format, va_list args)
{
	
	if(format == 'c')
		return (char_handler(args));
	if(format == 's')
		return (str_handler(args));
	if(format == 'p')
		return (pointer_handler(args));
	if(format == 'x' || format == 'X')
		return (ft_puthex(format, args));
	if(format == 'i' || format == 'd' || format == 'u')
		return (ft_putdec(format, args));
	return (0);
}

int	ft_printf(char const * str, ...)
{
	int	count;
	va_list	args;
	va_start(args, str);
	
	count = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += (selector(*str, args));
			/*if(*str == 'd')
				ft_putnbr_fd(va_arg(args, int));
			if(*str == 'i')
				ft_putnbr_fd(va_arg(args, int));
			if(*str == 'u')
				ft_putunsigned(va_arg(args,int));
			if(*str == 'x')
				ft_puthex_min(va_arg(args, float));
			if(*str == 'X')
				ft_puthex_may(va_arg(args, float));
			if(*str == %)
				ft_putchar_fd('%');
			count++; */
			str++;
		}
		else 
		{
			count++;
			ft_putchar_fd(*str, 1);
			str++;
		}
	}
	va_end(args);
	return (count);
}
