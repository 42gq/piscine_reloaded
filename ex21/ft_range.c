/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 16:24:11 by gquerre           #+#    #+#             */
/*   Updated: 2016/11/07 23:59:47 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int*)malloc(sizeof(int) * (max - min));
	if (range == NULL)
		return (0);
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
