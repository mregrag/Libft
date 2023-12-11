/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:41:18 by mregrag           #+#    #+#             */
/*   Updated: 2023/12/02 03:23:26 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p_src;
	unsigned char	*p_dest;

	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return ((void *)src);
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	while (n > 0)
	{
		*(p_dest++) = (*p_src++);
		n--;
	}
	return (dest);
}
