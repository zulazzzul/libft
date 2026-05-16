/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 22:32:06 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/05/16 02:15:36 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*ss;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	ss = malloc(len + 1);
	if (!ss)
		return (NULL);
	ft_strlcpy(ss, s + start, len + 1);
	return (ss);
}
//	size_t			i;
//	char			*sub;
//	unsigned int	slen;
//
//	slen = ft_strlen(s);
//	sub = 0;
//	if (start >= slen)
//		return (ft_strdup(""));
//	if (len > slen + start)
//		len = slen + start;
//	sub = malloc((len + 1) * sizeof(char));
//	if (!sub)
//		return (NULL);
//	i = 0;
//	while (i < len)
//	{
//		sub[i] = s[start + i];
//		i++;
//	}
//	sub[i] = '\0';
//	return (sub);
