/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:08:28 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:08:31 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *)dst;
	s = (char *)src;
	if (src <= dst)
	{
		while (len--)
			d[len] = s[len];
	}
	else
	{
		i = 0;
		while (i++ < len)
			*d++ = *s++;
	}
	return (dst);
}
