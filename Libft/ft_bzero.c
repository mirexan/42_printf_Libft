/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:07:33 by mregada-          #+#    #+#             */
/*   Updated: 2024/10/11 20:08:42 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	ft_bzero(void *str, size_t c)
{
	size_t		i;
	char		*pt_str;

	pt_str = (char *)str;
	i = 0;
	while (i < c)
	{
		pt_str[i] = 0;
		i++;
	}
}
