/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:21:44 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:21:46 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t			i;
	char			*s1;
	char			*s2;

	if (!*needle)
		return ((char*)haystack);
	while (n-- && *haystack)
	{
		if (*haystack == *needle)
		{
			i = n;
			s1 = (char*)haystack + 1;
			s2 = (char*)needle + 1;
			while (i-- && *s1 && *s2 && *s1 == *s2)
			{
				++s1;
				++s2;
			}
			if (!*s2)
				return ((char*)haystack);
		}
		++haystack;
	}
	return (NULL);
}
