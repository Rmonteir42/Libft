/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonteir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 11:21:26 by rmonteir          #+#    #+#             */
/*   Updated: 2018/12/14 11:21:28 by rmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	range = max - min;
	if (!(tab = (int*)(malloc(sizeof(int) * range))))
		return (NULL);
	i = 0;
	while (i < range)
		tab[i++] = min++;
	return (tab);
}
