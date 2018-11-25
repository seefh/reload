/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:52:39 by shamidan          #+#    #+#             */
/*   Updated: 2018/11/19 16:46:49 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		fact;

	fact = 1;
	i = 0;
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (i <= (nb - 1))
	{
		fact = fact * (nb - i);
		i++;
	}
	return (fact);
}
