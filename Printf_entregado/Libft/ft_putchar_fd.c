/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregada- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:13:50 by mregada-          #+#    #+#             */
/*   Updated: 2024/11/14 19:42:23 by mregada-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_putchar_fd(char c, int fd)
{
	if ((write (fd, &c, 1)) == -1)
		return (-1);
	return (0);
}