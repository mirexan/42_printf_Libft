/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 17:42:31 by mregada-          #+#    #+#             */
/*   Updated: 2024/10/15 20:05:23 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*espacio;

	espacio = malloc(num * size);
	if (espacio == 0)
		return (NULL);
	ft_bzero (espacio, num * size);
	return (espacio);
}
