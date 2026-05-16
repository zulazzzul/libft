/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 22:27:14 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/05/15 22:28:09 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *ss, size_t len)
{
	size_t	i;
	size_t	j;

	if (*ss == '\0')
		return ((char *)s);
	i = 0;
	while (s[i] && i < len)
	{
		j = 0;
		while (ss[j] && (i + j) < len && s[i + j] == ss[j])
			j++;
		if (ss[j] == '\0')
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
