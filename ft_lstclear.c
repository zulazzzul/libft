/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nd-abreu <nd-abreu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 01:47:12 by nd-abreu          #+#    #+#             */
/*   Updated: 2026/05/16 01:47:58 by nd-abreu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*clean;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		clean = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clean;
	}
}
