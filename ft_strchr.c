/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:25:57 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:25:59 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chc;
	int		i;

	i = 0;
	chc = (char)c;
	while (s[i])
	{
		if (s[i] == chc)
			return ((char*)&s[i]);
		i++;
	}
	if (s[i] == chc)
		return ((char*)&s[i]);
	return (NULL);
}
