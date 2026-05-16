/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 18:50:38 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/05/15 00:52:55 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	a;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	a = 0;
	while ((src[a] != '\0') && (a < (size - 1)))
	{
		dst[a] = src[a];
		a++;
	}
	dst[a] = '\0';
	return (src_len);
}
