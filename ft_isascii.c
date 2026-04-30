/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 15:21:00 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/04/23 15:55:38 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <=127)
		return (1);
	return(0);
}

//it didn't return zero in place of one is because
