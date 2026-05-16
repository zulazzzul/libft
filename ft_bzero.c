/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 16:15:17 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/05/16 00:41:57 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*byteptr;

	i = 0;
	byteptr = (unsigned char *)s;
	while (i < n)
	{
		byteptr[i] = 0;
		i++;
	}
}
