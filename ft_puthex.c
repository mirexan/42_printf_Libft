/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:59:39 by mregada-          #+#    #+#             */
/*   Updated: 2024/11/12 11:43:31 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_upper(char format)
{
	if (format == 'x')
		return (0);
	if (format == 'X')
		return (1);
	return (0);
}

static int	conversor_hex(int flag, unsigned int num)
{
	char	*hexm;
	char	*hexM;
	int		len;
	
	hexm = "0123456789abcdef";
	hexM = "0123456789ABCDEF";
	len = 0;
	if (num >= 16)
		len += conversor_hex(flag, (num / 16));
	if (flag == 0)
	{
		ft_putchar_fd(hexm[num % 16], 1);
		len++;
	}
	else if (flag == 1)
	{
		ft_putchar_fd(hexM[num % 16], 1);
		len++;
	}
	return (len);
}

int	ft_puthex(char format, va_list args)
{
	int			len;
	int			flag;
	unsigned int num;
	
	len = 0;
	num = va_arg(args, unsigned int);
	if (num == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	flag = is_upper(format);
	len += conversor_hex(flag, num);
	return (len);
}
