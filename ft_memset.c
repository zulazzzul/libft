/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:47:34 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/04/30 03:51:58 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(temp_ptr++) = (unsigned char) c;
		len--;
	}

	return (b);
}
