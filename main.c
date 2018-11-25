/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shamidan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 13:03:11 by shamidan          #+#    #+#             */
/*   Updated: 2018/11/20 12:24:33 by shamidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUF_SIZE 256

void	ft_char(char c)
{
	write(2, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_char(str[i]);
		i++;
	}
}

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

int		main(int argc, char *argv[])
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing.\n");
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_str(buf);
		}
		close(fd);
	}
	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
