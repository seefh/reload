/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:48:17 by shamidan          #+#    #+#             */
/*   Updated: 2018/11/20 12:46:02 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		result;

	if ((nb < 0) || (nb > 12))
		return (0);
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	else
	{
		result = nb * ft_recursive_factorial(nb - 1);
		return (result);
	}
}
