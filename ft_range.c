/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:14:22 by shamidan          #+#    #+#             */
/*   Updated: 2018/11/19 15:00:07 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		size;
	int		*tab;
	int		i;

	if (min > max)
		return (0);
	size = (max - 1) - (min);
	tab = (int*)malloc(sizeof(int) * (size));
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
