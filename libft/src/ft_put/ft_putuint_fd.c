/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 13:15:30 by ade-orma          #+#    #+#             */
/*   Updated: 2024/01/22 14:34:12 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putuint_fd(unsigned int n, int fd)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i = ft_putuint_fd(n / 10, fd) + i;
	}
	i += ft_putchar_fd(n % 10 + '0', 1);
	return (i);
}
