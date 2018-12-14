/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:22:50 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:22:52 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		chc;
	int			i;
	const char	*p;

	i = 0;
	p = NULL;
	chc = (char)c;
	while (s[i])
	{
		if (s[i] == chc)
			p = &s[i];
		i += 1;
	}
	if (s[i] == chc)
		return ((char*)&s[i]);
	return ((char*)p);
}
