/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:26:22 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:26:24 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	int		i;

	if (!s)
		return (NULL);
	if (!(tab = malloc((len + 1) * sizeof(char))))
		return (NULL);
	i = 0;
	tab[len] = '\0';
	while (len--)
	{
		tab[i] = s[start];
		i++;
		start++;
	}
	return (tab);
}
