/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabdelba <nabdelba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:23:49 by nabdelba          #+#    #+#             */
/*   Updated: 2019/04/12 11:27:01 by nabdelba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str, int d)
{
	while (*str)
		write(d, str++, 1);
}

void	ft_display_file(char *s)
{
	char	buff[512];
	int		ret;
	int		fd;

	if ((fd = open(s, O_RDONLY)) > 0)
	{
		while ((ret = read(fd, buff, 1)) > 0)
			ft_putstr(buff, 1);
		close(fd);
	}
}

int		main(int ac, char **av)
{
	if (ac > 2)
		ft_putstr("Too many arguments.\n", 2);
	else if (ac == 1)
		ft_putstr("File name missing.\n", 2);
	else
		ft_display_file(av[1]);
	return (0);
}
