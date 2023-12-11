/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregrag <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:37:38 by mregrag           #+#    #+#             */
/*   Updated: 2023/11/30 01:35:46 by mregrag          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(const char *s, char c)
{
	size_t	words;

	words = 0;
	while (*s)
	{
		while (*s == c && *s)
			++s;
		if (*s != c && *s)
		{
			++words;
			while (*s != c && *s)
				++s;
		}
	}
	return (words);
}

static void	*ft_free_matrix(char **matrix, int i)
{
	while (i--)
		free(matrix[i]);
	free(matrix);
	return (NULL);
}

static char	**ft_split_words(char **matrix, char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		len = 0;
		if (*s)
		{
			while (s[len] && s[len] != c)
				len++;
			matrix[i] = ft_substr(s, 0, len);
			if (matrix[i] == NULL)
				return (ft_free_matrix(matrix, i));
			s += len;
			i++;
		}
	}
	matrix[i] = NULL;
	return (matrix);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;

	if (!s)
		return (NULL);
	matrix = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (!matrix)
		return (NULL);
	return (ft_split_words(matrix, s, c));
}
