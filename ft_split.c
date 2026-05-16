/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 22:53:01 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/05/15 22:54:21 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 1;
	if (*s == '\0')
		word = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			word++;
			while (s[i] == c)
				i++;
		}
		i++;
	}
	return (word);
}

static char	**ft_free(char **s, size_t j)
{
	while (j--)
	{
		free(s[j]);
	}
	free(s);
	return (NULL);
}

static int	ft_last_word(char *strim, size_t start, char **result, size_t *j)
{
	size_t	i;

	i = ft_strlen(strim);
	if (i > start)
	{
		result[*j] = ft_substr(strim, start, i - start);
		if (!result[*j])
			return (-1);
		(*j)++;
	}
	return (0);
}

static char	**ft_fill_split(char *strim, char **result, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	start = 0;
	while (strim[i])
	{
		if (strim[i] == c)
		{
			result[j] = ft_substr(strim, start, i - start);
			if (!result[j])
				return (ft_free(result, j));
			j++;
			while (strim[i] == c)
				i++;
			start = i;
		}
		i++;
	}
	if (ft_last_word(strim, start, result, &j) == -1)
		return (ft_free(result, j));
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*strim;
	size_t	word;

	if (!s)
		return (NULL);
	strim = ft_strtrim(s, (char []){c, '\0'});
	if (!strim)
		return (NULL);
	word = ft_wordcount(strim, c);
	result = malloc(sizeof(char *) * (word + 1));
	if (!result)
	{
		free(strim);
		return (NULL);
	}
	if (!ft_fill_split(strim, result, c))
	{
		free(strim);
		return (NULL);
	}
	free(strim);
	return (result);
}
