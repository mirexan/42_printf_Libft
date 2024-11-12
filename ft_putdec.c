/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:18:44 by mregada-          #+#    #+#             */
/*   Updated: 2024/11/12 13:23:17 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putdec(char format, va_list args)
{
	int	len;
	int	num;
	char	*str;
	
	num = 0;
	if (format == 'd' || format == 'i')
		num = va_arg(args, int);
	else if (format == 'u')
		num = va_arg(args, unsigned int);
	str = ft_itoa(num);
	len = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free (str);
	return (len);		
}
