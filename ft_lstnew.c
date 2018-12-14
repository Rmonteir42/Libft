/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:27:48 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:27:51 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*lst;

	if (!(lst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		lst->content = NULL;
		lst->content_size = 0;
		lst->next = NULL;
		return (lst);
	}
	if (!(lst->content = (void*)malloc(sizeof(void*) * content_size)))
	{
		free(lst);
		return (NULL);
	}
	lst->content = ft_memcpy(lst->content, (const void*)content, content_size);
	lst->content_size = content_size;
	lst->next = NULL;
	return (lst);
}
