/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:32:21 by mregrag           #+#    #+#             */
/*   Updated: 2023/11/27 11:37:19 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	size_t	i;

	ch = (char)c;
	i = ft_strlen(s);
	if (ch == '\0')
		return ((char *)s + i);
	while (i--)
	{
		if (*(s + i) == ch)
			return ((char *)(s + i));
	}
	return (NULL);
}
