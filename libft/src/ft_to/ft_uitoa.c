/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_uitoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-orma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 13:15:30 by ade-orma          #+#    #+#             */
/*   Updated: 2023/02/12 13:18:21 by ade-orma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_uitoa(unsigned int n)
{
	char	*ptr;
	int		len;

	len = ft_nbrlen((int) n);
	ptr = (char *)malloc(sizeof(char) * (length + 1));
	if (!ptr)
		return (NULL);
	ptr[length] = '\0';
	while (n != 0)
	{
		ptr[length - 1] = n % 10 + '0';
		n = n/10;
		len--;
	}
	return (ptr);
}
