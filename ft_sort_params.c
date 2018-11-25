/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:11:43 by shamidan          #+#    #+#             */
/*   Updated: 2018/11/14 09:24:54 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				argv[0] = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = argv[0];
				i = 0;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
