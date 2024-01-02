/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:15:30 by ade-orma          #+#    #+#             */
/*   Updated: 2023/01/01 13:18:21 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t length)
{
	size_t	i;

	i = 0;
	while (src[i] && (i < length))
	{
		dst[i] = src[i];
		i++;
	}
	while (i < length)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
