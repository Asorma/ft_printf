/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:15:30 by ade-orma          #+#    #+#             */
/*   Updated: 2024/01/22 14:08:46 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(uintptr_t ptr, const char format, int fd, int flag)
{
	int	i;

	i = 0;
	if (format == 'p' && ptr == 0)
		return (ft_putstr_fd("(nil)", 1));
	if (format == 'X')
	{
		if (ptr >= 16)
			i += ft_puthex_fd(ptr / 16, format, fd, 0);
		i += ft_putchar_fd("0123456789ABCDEF"[ptr % 16], fd);
	}
	else if (format == 'x' || format == 'p')
	{
		if (format == 'p' && i == 0 && flag == 0)
			i += ft_putstr_fd("0x", 1);
		if (ptr >= 16)
			i += ft_puthex_fd(ptr / 16, format, fd, 1);
		i += ft_putchar_fd("0123456789abcdef"[ptr % 16], fd);
	}
	return (i);
}
