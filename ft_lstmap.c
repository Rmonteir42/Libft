/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:26:40 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:26:43 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*link;
	t_list	*first;

	if (!f || !lst)
		return (NULL);
	new = (*f)(lst);
	first = ft_lstnew(new->content, new->content_size);
	link = first;
	lst = lst->next;
	while (lst)
	{
		new = (*f)(lst);
		link->next = ft_lstnew(new->content, new->content_size);
		link = link->next;
		lst = lst->next;
	}
	return (first);
}
