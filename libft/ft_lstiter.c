/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbureera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 14:47:05 by pbureera          #+#    #+#             */
/*   Updated: 2022/06/14 14:51:55 by pbureera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
