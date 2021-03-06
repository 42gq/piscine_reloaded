/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquerre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:54:21 by gquerre           #+#    #+#             */
/*   Updated: 2016/11/04 19:01:41 by gquerre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			k++;
		i++;
	}
	return (k);
}
